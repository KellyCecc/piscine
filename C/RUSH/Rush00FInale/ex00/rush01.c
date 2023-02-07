=/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:55:04 by lray              #+#    #+#             */
/*   Updated: 2022/09/03 18:27:02 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_makecharset(char *left, char *middle, char *right, int type)
{
	if (type == 0)
	{
		*left = '/';
		*middle = '*';
		*right = '\\';
	}
	else if (type == 1)
	{
		*left = '*';
		*middle = ' ';
		*right = '*';
	}
	else
	{
		*left = '\\';
		*middle = '*';
		*right = '/';
	}
}

void	ft_makeline(int len, int type)
{
	int		i;
	char	left;
	char	middle;
	char	right;

	ft_makecharset(&left, &middle, &right, type);
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

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 & y > 0)
	{
		ft_makeline(x, 0);
		while (i < y - 2)
		{
			ft_makeline(x, 1);
			i++;
		}
		if (y != 1)
		{
			ft_makeline(x, 2);
		}
	}
}
