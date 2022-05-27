/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:24:33 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/31 12:32:18 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_same(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i;
		while ((str[i] != str[j + 1]) && (str[j] != '\0'))
		{
			j++;
		}
		if (str[i] == str[j + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_base(char *base, int lenght)
{
	int	i;

	i = 0;
	if (lenght == 0 || lenght == 1)
	{
		return (0);
	}
	if (ft_check_same(base) == 0)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght_base;
	long	nb;
	int		check_base;

	nb = nbr;
	lenght_base = ft_strlen(base);
	check_base = ft_check_base(base, lenght_base);
	if (check_base == 0)
		write(1, "", 1);
	if ((nb < 0) && (check_base != 0))
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if ((nb < lenght_base) && (check_base != 0))
	{
		write(1, &base[nb], 1);
	}
	else if ((nb > lenght_base) && (check_base != 0))
	{
		ft_putnbr_base(nb / lenght_base, base);
		ft_putnbr_base(nb % lenght_base, base);
	}
}
/*
int	main(void)
{
	char base[] = "poneyvif";
       	int	nbr = 38;
	
	ft_putnbr_base(nbr, base);	
}
*/
