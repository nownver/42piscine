/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:27:23 by urthani           #+#    #+#             */
/*   Updated: 2023/06/10 15:38:48 by urthani          ###   ########.fr       */
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
