/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:11:10 by urthani           #+#    #+#             */
/*   Updated: 2023/06/13 13:58:25 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 && *s2 && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

//#include<stdio.h>
//int main(){ printf("%d", ft_strncmp("yoker", "yokee", 4));}
// 4 y 3 o 2 k 1 e 0 r -1
