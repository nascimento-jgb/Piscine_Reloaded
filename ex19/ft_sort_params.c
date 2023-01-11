/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:01:00 by jonascim          #+#    #+#             */
/*   Updated: 2023/01/11 15:01:03 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **argv, int i)
{
	char *temp;

	temp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = temp;

}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		if (argc > 2)
		{
			i = 0;
			while (i++ < argc)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
					{
						ft_swap(argv[i], i);
						i = 0;
					}
			}
		}
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
