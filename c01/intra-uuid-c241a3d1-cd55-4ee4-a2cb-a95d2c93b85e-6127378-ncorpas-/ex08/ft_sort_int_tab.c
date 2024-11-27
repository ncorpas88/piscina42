/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:11:12 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/13 13:38:13 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sort_recursive(int *tab, int size, int index)
{
	if (size <= 1)
	{
		return ;
	}
	if (index == size - 1)
	{
		bubble_sort_recursive(tab, size - 1, 0);
		return ;
	}
	if (tab[index] > tab[index + 1])
	{
		swap(&tab[index], &tab[index + 1]);
	}
	bubble_sort_recursive(tab, size, index + 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	bubble_sort_recursive(tab, size, 0);
}

/*int	main()
{
	int	array[] = {5, 2, 9, 1, 5, 6};
	int	size = sizeof(array) / sizeof(array[0]);

	ft_sort_int_tab(array, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}*/
