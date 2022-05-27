/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:30:50 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/29 17:37:27 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	last_index;

	i = 0;
	last_index = argc -1;
	while (last_index > 0)
	{	
		i = 0;
		while (argv[last_index][i] != '\0')
		{
			write(1, &argv[last_index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		last_index--;
	}
}
