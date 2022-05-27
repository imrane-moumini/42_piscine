/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:39:51 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/30 17:05:45 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return	(dest);
}

char	*ft_strdup(char *src)
{
	int	lenght;
	char	*dest;

	lenght = ft_strlen(src);
	dest = malloc(sizeof(char) * lenght);
	ft_strcpy(src, dest);
	return (dest);
}

int	main(void)
{
	char	src[] = "hello";

	printf("%s", ft_strdup(src));
}
