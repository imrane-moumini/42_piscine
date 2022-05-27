/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:31:21 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/30 20:06:11 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	lenght;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
	}
	lenght = max - min;
	*range = malloc(sizeof(int) * lenght);
	
	while (i < max)
	{
		range[i][j] = min;
		min++;
		j++;
	}
	return (lenght);
}

int main()
{
	int *range
}
