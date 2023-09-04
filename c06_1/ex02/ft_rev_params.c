/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:01:00 by urthani           #+#    #+#             */
/*   Updated: 2023/06/20 15:08:31 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char	*argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	if (argc >= 2)
	{
		while (j != 0)
		{
			i = 0;
			while (argv[j][i] != '\0')
				i++;
			write(1, argv[j], i);
			write(1, "\n", 1);
			j--;
		}
	}
}
