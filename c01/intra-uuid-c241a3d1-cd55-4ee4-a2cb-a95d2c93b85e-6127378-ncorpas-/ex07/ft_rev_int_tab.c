/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:24:46 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/13 12:36:12 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

/*int	main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array original: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Array invertido: ");
	for (int i = 0; i < size; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}*/
