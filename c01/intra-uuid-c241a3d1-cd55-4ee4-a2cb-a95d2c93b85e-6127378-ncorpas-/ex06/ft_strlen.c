/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:59:35 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/10 13:20:02 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int	main(void)
{
	char	str[] = "Hola, mundo!";
	printf("El número de caracteres es : %d\n", ft_strlen(str));
	return (0);
}*/
