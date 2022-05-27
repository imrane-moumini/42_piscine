/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:46:39 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/13 16:30:14 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x, int column)
{
	if (column == 1)
	{
		if ((column == 1) && (x == 1))
		{	
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('A');
		}
	}
	if (column >= 2 && column < x)
	{
		ft_putchar('B');
	}
	if ((column == x) && (x != 1))
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	middle_line(int x, int column)
{
	if (column == 1)
	{
		if ((column == 1) && (x == 1))
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
		}
	}
	if (column >= 2 && column < x)
	{
		ft_putchar(' ');
	}
	if ((column == x) && (x != 1))
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	last_line(int x, int column)
{
	if (column == 1)
	{
		ft_putchar('A');
	}
	if ((column >= 2) && (column < x))
	{
		ft_putchar('B');
	}
	if ((column == x) && (x != 1))
	{
		ft_putchar('C');
	}
}	

void	line_writer(int x, int y, int column, int line)
{
	if (line == 1)
	{
		first_line(x, column);
	}
	if ((line > 1) && (line < y))
	{
		middle_line(x, column);
	}
	if (line == y && y > 1)
	{
		last_line(x, column);
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	if (x <= 0 || y <= 0)
	{
		write (1, "Input must be number > 0)", 24);
		return ;
	}
	while (1)
	{
		line++;
		if ((line > y) && (column <= x))
		{
			return ;
		}	
		while ((line <= y) && (column <= x))
		{
			column++;
			line_writer(x, y, column, line);
		}
		column = 0;
	}
}
