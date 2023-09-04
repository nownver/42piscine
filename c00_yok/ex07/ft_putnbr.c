/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:37:41 by urthani           #+#    #+#             */
/*   Updated: 2023/06/10 16:08:40 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_format(int c)
{
	write(1, &c, 1);
}

int	ft_reverse(int c)
{
	int	remain;
	int	reversed;

	reversed = 0;
	remain = 0;
	while (c != 0)
	{
		remain = c % 10;
		reversed = (reversed * 10) + remain;
		c /= 10;
	}
	return (reversed);
}

void	ft_print_minmax(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		write(1, "2147483647", 10);
	}
}

void	ft_putnbr(int nb)
{
	int	reverse;

	if (nb == 0 || nb == -2147483648 || nb == 2147483647)
	{
		ft_print_minmax(nb);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_write_format('-');
		}
		reverse = ft_reverse(nb);
		while (reverse != 0)
		{
			ft_write_format(reverse % 10 + '0');
			reverse = reverse / 10;
		}
	}
}
