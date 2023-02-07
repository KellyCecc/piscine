/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:17:53 by lray              #+#    #+#             */
/*   Updated: 2022/09/03 17:01:34 by kceccato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(int len, int type)
{
	int i;
	char left;
	char middle;
	char right;

	if (type == 0)
	{
		//top line
		left = '/';
		middle = '*';
		right = '\\';
	}
	else if (type == 1)
	{
		//middle line
		left = '*';
		middle = ' ';
		right = '*';
	}
	else
	{
		//bottom line
		left = '\\';
		middle = '*';
		right = '/';
	}
	ft_putchar(left);
	i = 0;
	while (i < len - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (len != 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

int	main(void)
{
	int x = 20;
	int y = 20;
	int i = 3;
	
	if (x > 0 & y > 0)
	{
		ft_putline(x, 0);
		while (i < y -2)
		{
			ft_putline(x, 1);
			i++;	
		}
		if (y != 1)
		{
			ft_putline(x, 2);
		}
	}
}
