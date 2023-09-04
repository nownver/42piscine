/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:11:30 by urthani           #+#    #+#             */
/*   Updated: 2023/06/20 17:08:56 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_params(char *tab[], int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swap(tab + i, tab + j);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc >= 2)
	{
		ft_sort_params(argv, argc);
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
