/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:21:32 by damedina          #+#    #+#             */
/*   Updated: 2023/07/13 21:02:54 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		indice_str;
	int		indice_buscar;
	int		control;

	if (*to_find == '\0')
		return (str);
	indice_str = 0;
	while (str[indice_str] != '\0')
	{
		control = 1;
		indice_buscar = 0;
		while (to_find[indice_buscar] != '\0' && control == 1)
		{
			if (str[indice_str] != to_find[indice_buscar])
				control = 0;
			indice_str++;
			indice_buscar++;
		}
		if (control == 1)
			return (&str[indice_str - indice_buscar]);
		indice_str -= indice_buscar;
		indice_str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	cadena[] = "PATATApatataPATATA";
	char	buscar[] = "patata";

	printf("%s\n\n", strstr(cadena, buscar));
	printf("%s\n", ft_strstr(cadena, buscar));
}
*/
