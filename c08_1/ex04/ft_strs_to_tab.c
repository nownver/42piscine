/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:19:45 by urthani           #+#    #+#             */
/*   Updated: 2023/06/27 16:49:43 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_strs_to_tab.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	*d;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	d = dest;
	if (!dest)
		return (0);
	while (*str)
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
	return (d);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int
}
