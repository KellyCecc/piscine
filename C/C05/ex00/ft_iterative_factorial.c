/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:40:22 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/22 11:29:12 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}*/
