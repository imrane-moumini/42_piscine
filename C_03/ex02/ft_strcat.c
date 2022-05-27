/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoumini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:13:03 by imoumini          #+#    #+#             */
/*   Updated: 2022/03/28 13:24:36 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	lenght;
	int	i;

	lenght = 0;
	i = 0;
	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	while (src[i] != '\0')
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char dest[10] = "bob";
        char src[] = "ueue";

        printf("mine is : %s \n",ft_strcat(dest, src));
        printf("the real one is : %s",strcat(dest, src));
}*/
