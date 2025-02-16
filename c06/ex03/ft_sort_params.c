/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:51:56 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/31 23:02:17 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (ac > i)
	{
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (ac > j)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
	ft_putstr(av, ac);
	return (0);
}
