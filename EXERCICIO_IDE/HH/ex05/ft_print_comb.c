/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmucuate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:29:47 by jmucuate          #+#    #+#             */
/*   Updated: 2024/10/21 11:57:23 by jmucuate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char d)
{
	write (1, &d, 1);
}

void	ft_verfic(int a, int b, int c)
{
	if (a != 7 || b != 8 || c != 9)
	{
		write (1, ", ", 2);
	}
}
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print(a + '0');
				ft_print (b + '0');
				ft_print (c + '0');
				ft_verfic(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
