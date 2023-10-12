/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:08:02 by damedina          #+#    #+#             */
/*   Updated: 2023/07/13 15:43:58 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	indice_dest;
	int	indice_src;

	indice_dest = 0;
	indice_src = 0;
	while (dest[indice_dest] != '\0')
		indice_dest++;
	while (src[indice_src] != '\0')
	{
		dest[indice_dest] = src[indice_src];
		indice_dest++;
		indice_src++;
	}
	dest[indice_dest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destino[13] = "PATATA";
	char	destino2[13] = "PATATA";
	char	origen[] = "patata";

	printf("%s\n", strcat(destino, origen));
	printf("%s\n\n", destino);
	printf("%s\n", ft_strcat(destino2, origen));
	printf("%s\n", destino2);
}
*/
