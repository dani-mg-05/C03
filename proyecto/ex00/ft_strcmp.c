/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:33:21 by damedina          #+#    #+#             */
/*   Updated: 2023/07/13 15:14:19 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] != '\0' && s2[indice] != '\0')
	{
		if (s1[indice] != s2[indice])
			return (s1[indice] - s2[indice]);
		indice++;
	}
	return (s1[indice] - s2[indice]);
}
/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d\n", strcmp(argv[1], argv[2]));
}
*/
