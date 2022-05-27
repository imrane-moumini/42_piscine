/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:44:51 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/24 22:25:38 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(unsigned char c)
{
	char	*hexatab;
	int		divide;
	int		modulo;
	char	first_element;
	char	second_element;

	hexatab = "0123456789abcdef";
	divide = c / 16;
	modulo = c % 16;
	first_element = hexatab[divide];
	second_element = hexatab[modulo];
	write(1, &first_element, 1);
	write(1, &second_element, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32 && str[i] <= 126))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			convert(str[i]);
		}
		i++;
	}	
}
