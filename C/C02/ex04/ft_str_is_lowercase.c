/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:28:40 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/09 10:46:34 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "sadsa";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/
