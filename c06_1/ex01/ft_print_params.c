/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:29:06 by urthani           #+#    #+#             */
/*   Updated: 2023/06/20 13:35:12 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char	*argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
				i++;
			write(1, argv[j], i);
			write(1, "\n", 1);
			j++;
		}
	}
}
