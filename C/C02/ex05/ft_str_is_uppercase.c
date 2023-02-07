/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:38:48 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/09 11:55:52 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && (str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "FERGRE";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/
