/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:59:12 by urthani           #+#    #+#             */
/*   Updated: 2023/06/21 13:33:03 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[len])
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>

// int	main()
// {
// ft
// }
