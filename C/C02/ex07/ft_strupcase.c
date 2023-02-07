/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:43:25 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/09 10:51:20 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{	
			str[i] = str[i] -32;
		}
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "ewfgebtbt";
	printf("%s", ft_strupcase(str));
	return (0);
}*/
