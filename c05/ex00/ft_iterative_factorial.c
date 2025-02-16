/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 03:30:19 by hmimouni          #+#    #+#             */
/*   Updated: 2024/09/02 06:14:20 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;
	int	i;

	i = 0;
	resultat = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
		resultat *= i;
	return (resultat);
}
/*int	main()
{
	int	i;
	i = 0;
	printf("%d\n", ft_iterative_factorial(12));
	
}
*/
