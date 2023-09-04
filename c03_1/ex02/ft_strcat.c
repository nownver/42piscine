/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:18:42 by urthani           #+#    #+#             */
/*   Updated: 2023/06/14 19:46:17 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}		
