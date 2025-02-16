/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:57:45 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/22 16:24:35 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				t = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
			}
			i++;
		}
		size--;
	}
}
/*#include <stdio.h>
int 	main()
{
	int	i[] = {0, 5, 10, 2};
	ft_sort_int_tab(i, 4);
	printf("%d %d %d %d", i[0], i[1], i[2], i[3]);
}*/
