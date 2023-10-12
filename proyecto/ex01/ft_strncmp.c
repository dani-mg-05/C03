/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:06:15 by damedina          #+#    #+#             */
/*   Updated: 2023/07/13 15:37:58 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	indice;

	if (n == 0)
		return (0);
	indice = 0;
	while (indice < n - 1)
	{
		if (s1[indice] != '\0' && s2[indice] != '\0')
		{
			if (s1[indice] != s2[indice])
				return (s1[indice] - s2[indice]);
		}
		else
			return (s1[indice] - s2[indice]);
		indice++;
	}
	return (s1[indice] - s2[indice]);
}
/*
int	main(int argc, char **argv)
{
	printf("%d\n", strncmp(argv[1], argv[2], -5));
	printf("%d\n", ft_strncmp(argv[1], argv[2], -5));
}
*/
