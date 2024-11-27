/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:05:00 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/09 11:55:09 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("Antes del swat: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Después del swap: a = %d, b = %d\n", a, b);
	return (0);
}*/
