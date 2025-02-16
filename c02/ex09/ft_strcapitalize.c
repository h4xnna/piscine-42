/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:34:25 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/25 20:41:08 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		str[i - 1] -= 32;
	}
	while (str[i])
	{
		if (!((str[i - 1] <= 'Z' && str[i - 1] >= 'A') \
							|| (str[i - 1] >= '0' && str[i - 1] <= '9') \
							|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	 str[] = "gRRos *---*-== PROUT vomis  caca";
	printf("%s\n", ft_strcapitalize(str));
}*/
