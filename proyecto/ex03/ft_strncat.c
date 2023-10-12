/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:24:03 by damedina          #+#    #+#             */
/*   Updated: 2023/07/13 16:57:05 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				indice_dest;
	unsigned int	indice_src;

	indice_dest = 0;
	indice_src = 0;
	while (dest[indice_dest] != '\0')
		indice_dest++;
	while (indice_src < nb && src[indice_src] != '\0')
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
	char    destino[13] = "PATATA";
	char    destino2[13] = "PATATA";
	char    origen[] = "patata";

	printf("%s\n", strncat(destino, origen, 5));
	printf("%s\n\n", destino);
	printf("%s\n", ft_strncat(destino2, origen, 5));
	printf("%s\n", destino2);
}
*/
