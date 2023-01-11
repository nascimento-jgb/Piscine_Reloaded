/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:02:08 by jonascim          #+#    #+#             */
/*   Updated: 2023/01/11 15:02:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0 || nb > 15)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb >= 2)
			res *= --nb;
	}
	return (res);
}
