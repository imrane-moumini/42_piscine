/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:44:21 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/17 17:47:37 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		j = i;
		while (j < size -1)
		{
			if (tab[i] > tab[j + 1])
			{
				ft_swap(&tab[i], &tab[j + 1]);
			}
			j++;
		}	
		i++;
	}
}
