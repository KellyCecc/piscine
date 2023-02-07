/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:55:30 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/09 10:49:15 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 127))
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "#@$$%^#$";
	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
