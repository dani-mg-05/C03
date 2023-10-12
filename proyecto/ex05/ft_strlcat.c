/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:08:03 by damedina          #+#    #+#             */
/*   Updated: 2023/07/19 18:53:46 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	indice_dest;
	unsigned int	indice_src;
	unsigned int	long_src;

	indice_dest = 0;
	long_src = 0;
	while (src[long_src] != '\0')
		long_src++;
	if (size == 0)
		return (long_src);
	while (dest[indice_dest] != '\0')
	{
		if (indice_dest >= size)
			return (size + long_src);
		indice_dest++;
	}
	indice_src = 0;
	while ((indice_dest + indice_src) < size)
	{
		dest[indice_dest + indice_src] = src[indice_src];
		indice_src++;
	}
	dest[indice_dest + indice_src - 1] = '\0';
	return (long_src + indice_dest);
}
/*
int	main(void)
{
	char	dest[88] = "";
	char	dest2[88] = "";
	char	src[] = "";

	printf("%d\n", (int) strlcat(dest, src, 0));
	printf("%s\n\n", dest);
	printf("%d\n", (int) ft_strlcat(dest2, src, 0));
	printf("%s\n", dest2);
}
*/
