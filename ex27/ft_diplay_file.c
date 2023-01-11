#include <unistd.h>
#include <fcntl.h>
#define BUFF_SIZE 4096

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str)
		ft_putchar(str++);
}
int	main(int argc, char **argv)
{
	char	buffer[BUFF_SIZE + 1];
	int		fd;
	int		res;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((res = read(fd, buffer, BUFF_SIZE)))
		{
			buffer[res] = '\0';
			write(1, buffer, res);
		}
		if (close(fd) == -1)
			return (1);
	}
	else if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	ft_putchar('\n');
	return (0);
}
