/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:37:11 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/15 12:23:48 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int b)
{
	int		integer;
	int		modulo;
	char	first_number;
	char	second_number;

	integer = b / 10;
	modulo = b % 10;
	first_number = 48 + integer;
	second_number = 48 + modulo;
	write(1, &first_number, 1);
	write(1, &second_number, 1);
}

void	heart(int a, int b, char space, char coma)
{
	ft_putchar(a);
	write(1, &space, 1);
	ft_putchar(b);
	if (a <= 98 && b <= 99)
	{
		if (a == 98 && b == 99)
		{
			return ;
		}
		write(1, &coma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	int				a;
	int				b;
	char			space;
	char			coma;

	space = ' ';
	coma = ',';
	a = 0;
	b = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{				
			heart(a, b, space, coma);
			b++;
		}
		a++;
	}
}
