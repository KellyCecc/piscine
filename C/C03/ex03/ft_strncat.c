/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:31:49 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/11 17:10:00 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((src[j]) && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
		dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "suuuuu";
	char	src[3] = "gus";
	printf("%s\n", ft_strncat(dest, src, 2));
	return (0);
}*/
