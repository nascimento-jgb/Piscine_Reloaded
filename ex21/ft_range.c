/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:00:44 by jonascim          #+#    #+#             */
/*   Updated: 2023/01/11 15:00:47 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	str = malloc(sizeof(int *) * (max - min));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min++;
		i++;
	}
	return (str);
}
