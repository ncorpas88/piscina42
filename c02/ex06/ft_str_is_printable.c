/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:10:17 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/17 11:25:28 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*test1 = "Hello word!";
	char    *test2 = "\nHello";
	char    *test3 = "";
	
	printf ("Test 1: %d\n", ft_str_is_printable(test1));
	printf ("Test 2: %d\n", ft_str_is_printable(test2));
	printf ("Test 3: %d\n", ft_str_is_printable(test3));
}*/
