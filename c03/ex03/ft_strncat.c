/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:19:26 by hmimouni          #+#    #+#             */
/*   Updated: 2024/08/26 18:14:52 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[] = "hanna";
	char	src[] = "lpbelle";

	printf("%s\n", ft_strncat(dest, src, 5));
}*/
