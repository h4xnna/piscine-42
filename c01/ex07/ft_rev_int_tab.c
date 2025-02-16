/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:15:25 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/22 17:29:47 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < (size / 2))
	{
		t = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = t;
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 4);
	while(i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}*/
