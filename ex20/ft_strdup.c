/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:00:53 by jonascim          #+#    #+#             */
/*   Updated: 2023/01/11 15:00:54 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dst = malloc(sizeof(char *) * i);
	if (!dst)
		return (0);
	i = 0;
	while (src[i])
		dst[i] = src[i++];
	dst[i] = '\0';
	return (dst);
}
