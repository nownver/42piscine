/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:31:27 by urthani           #+#    #+#             */
/*   Updated: 2023/06/21 13:31:30 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*dest;
	int	i;

	range = max - min;
	dest = (int *)malloc(sizeof(int) * range);
	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
