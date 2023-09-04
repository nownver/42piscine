/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:31:31 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/26 17:46:25 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	str1_len;
	int	i;

	str1_len = ft_strlen(dest);
	i = str1_len;
	while (*src)
	{
		dest[i] = *src;
		++i;
		++src;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	string = (char *)malloc(sizeof(char) * (len));
	if (size == 0)
		return (string);
	ft_strcpy(string, strs[0]);
	i = 1;
	while (i < size)
	{
		string = ft_strcat(string, sep);
		string = ft_strcat(string, strs[i]);
		i++;
	}
	string[len] = '\0';
	return (string);
}

/*
#include <stdio.h>

int	main(void)
{
	char *strs[] = {"ABC", "DEF", "GHI"};
	char *result = ft_strjoin(3, strs, " ");
	printf("%s\n", result);
	free(result);
	return 0;
}*/
