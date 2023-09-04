/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:45:50 by urthani           #+#    #+#             */
/*   Updated: 2023/06/14 19:45:53 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = ft_strlen(dest);
	while (*src && nb)
	{
		dest[i] = *src;
		src++;
		nb --;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
