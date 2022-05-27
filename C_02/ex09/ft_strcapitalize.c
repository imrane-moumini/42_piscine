/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:59:15 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/23 18:01:41 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_minimize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	j = 0;
	ft_minimize(str);
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	while (str[j])
	{
		if (((!(str[j] >= 65 && str[j] <= 90))
				&& (!(str[j] >= 97 && str[j] <= 122))
				&& (!(str[j] >= 48 && str[j] <= 57)))
			&& (str[j + 1] >= 97 && str[j + 1] <= 122))
		{
			str[j + 1] = str[j + 1] - 32;
		}
		j++;
	}
	return (str);
}
