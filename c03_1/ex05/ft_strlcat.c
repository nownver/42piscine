/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:40:25 by urthani           #+#    #+#             */
/*   Updated: 2023/06/20 17:51:00 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
	n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	og_destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	og_destlen = destlen;
	i = 0;
	if (size == 0 || size <= destlen)
	{
		return (srclen + size);
	}
	while (src[i] != '\0' && i < size - og_destlen - 1)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (og_destlen + srclen);
}
