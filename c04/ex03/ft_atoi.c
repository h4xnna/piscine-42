/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:35:12 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/28 18:18:40 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32 && str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while ((str[i] >= '0' || str[i] <= '9') && str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int	main()
{
	char	str[99] = "   --+-+++--48645656";
	printf("%d\n", ft_atoi(str));
}
*/
