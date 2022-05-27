/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:23:09 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/29 15:17:34 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_lenght(char *base)
{
	int	i;
	
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_base_same(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{	
		j = i;
		while ((base[i] != base[j + 1]) && (base[j] != '\0'))
		{
			j++;
		}
		if ( base[i] == base[j + 1])
		{
			return (0);
		}
		i++;
	}
}

int	ft_check_base(char *base, int lenght)
{
	int i;

	i = 0;
	if (lenght == 0 || lenght == 1)
	{
		return (0)
	}
	if (ft_base_same(base) == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1)
}

int	ft_atoi(char *str, char *base, int lenght)
{
	int	i;
	int	signe;

	i = 0;
	signe = 1;
	
	while (str[i] != '\0')
	{
		while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		while (str[i] == '-')
		{
			signe = signe * 1
		}
		// prendre uniquement les chiffres aui sont dqns la base
		// prendre les lettres aui reste
		// convertir de base a decimal
		while ()
		{
		}
		i++;
	}
}

int	ft_atoi_base(char *str, char *base)
{	
	int	nbr;
	int	lenght;

	lenght = ft_lenght(base);
	if (ft_check_base(base, lenght) == 0)
		return (0);
	nbr = ft_atoi(str, base, lenght);
	return (nbr);
}

int	main(void)
{
	char str[] = "---+--+1234ab567";
	char base[] = "0123456789ABCDEF"
	printf(ft_atoi_base(str, base));
}
