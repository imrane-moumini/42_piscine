/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:26:23 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/31 16:38:14 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i < power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}
