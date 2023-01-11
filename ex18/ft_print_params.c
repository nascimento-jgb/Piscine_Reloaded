/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:01:07 by jonascim          #+#    #+#             */
/*   Updated: 2023/01/11 15:01:16 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc >= 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				ft_putchar(argv[i][j++]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
