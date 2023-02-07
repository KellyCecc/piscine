/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:16:12 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/22 09:59:56 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 2;
	while (i <= (nb / 2))
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int	main()
{
	printf("%d\n", ft_sqrt(25));
}*/
