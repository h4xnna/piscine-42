/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:49:29 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/21 09:12:38 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int y, int z)
{
	ft_putchar(48 + y / 10);
	ft_putchar(48 + y % 10);
	write(1, " ", 1);
	ft_putchar(48 + z / 10);
	ft_putchar(48 + z % 10);
}

void	ft_print_comb2(void)
{
	int	y;
	int	z;

	y = 0;
	while (y <= 98)
	{
		z = y + 1;
		while (z <= 99)
		{
			ft_print_numbers(y, z);
			if (y != 98 || z != 99)
				write(1, ", ", 2);
			z++;
		}
		y++;
	}
}
/*int	main()
{
	ft_print_comb2();
	return (0);
}*/
