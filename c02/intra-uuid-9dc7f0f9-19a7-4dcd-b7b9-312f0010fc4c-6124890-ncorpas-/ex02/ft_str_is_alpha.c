/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:36:15 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/16 21:52:15 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "holamundo";
	char	str2[] = "hola123";
	
	printf("Cadena: %s - Solo alfabético: %d\n", str1, ft_str_is_alpha(str1));
	printf("Cadena: %s - Solo alfabético: %d\n", str2, ft_str_is_alpha(str2));
	
	return (0);
}*/
