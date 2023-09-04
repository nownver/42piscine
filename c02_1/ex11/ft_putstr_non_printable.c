/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:28:42 by urthani           #+#    #+#             */
/*   Updated: 2023/06/13 21:52:06 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] >= 127)
		{
			if (str[n] >= -127 && str[n] <= -1)
			{
				str[n] += 256;
			}
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[n] / 16], 1);
			write(1, &"0123456789abcdef"[str[n] % 16], 1);
		}
		else
		{
			write(1, &str[n], 1);
		}
		n++;
	}
}
