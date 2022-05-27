/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:54:05 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/31 12:23:32 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i] != '\0')
	{	
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{	
				i++;
				j++;
				if (j == ft_strlen(to_find))
					return (&str[i - j]);
			}
			j = 0;
			i = i - j;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "salut cciaczca bien";
	char to_find[] = "ca";
	printf("%s", ft_strstr(str, to_find));
}*/
