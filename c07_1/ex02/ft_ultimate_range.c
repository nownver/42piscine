/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:40:22 by urthani           #+#    #+#             */
/*   Updated: 2023/06/26 17:40:23 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*dest;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc(sizeof(int) * size);
	if (!(dest))
		return (-1);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (i);
}
/*
#include<stdio.h>
int	main()
{
	int   **i = {1,2,3,4};
	printf("%d", ft_ultimate_range(i, 1, 4));
}*/
