/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:42:33 by urthani           #+#    #+#             */
/*   Updated: 2023/06/09 16:45:49 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_format(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_format(a / 10 + 48);
			ft_write_format(a % 10 + 48);
			write(1, " ", 1);
			ft_write_format(b / 10 + 48);
			ft_write_format(b % 10 + 48);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
