/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorpas <ncorpas-@student.42malaga.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:24:01 by ncorpas           #+#    #+#             */
/*   Updated: 2024/10/01 19:19:29 by ncorpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			c = (a / 10) + '0';
			write(1, &c, 1);
			c = (a % 10) + '0';
			write(1, &c, 1);
			write(1, "", 1);
			c = (b / 10) + '0';
			write(1, &c, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
