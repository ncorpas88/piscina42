/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:28:04 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/16 18:46:05 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "Hello";
	char	str3[] = "HEllo123";
	char	str4[] = "HELLO";
	
	printf("Test 1: %s -> %d\n", str1, ft_str_is_uppercase(str1));
	printf("Test 2: %s -> %d\n", str2, ft_str_is_uppercase(str2));
	printf("Test 3: %s -> %d\n", str3, ft_str_is_uppercase(str3));
	printf("Test 4: %s -> %d\n", str4, ft_str_is_uppercase(str4));
}*/
