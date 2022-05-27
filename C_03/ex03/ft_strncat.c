/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:23:34 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/28 17:38:47 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_lenght;
	unsigned int	i;

	dest_lenght = 0;
	i = 0;
	while (dest[dest_lenght])
	{
		dest_lenght++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}
