/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmucuate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:44:08 by jmucuate          #+#    #+#             */
/*   Updated: 2024/10/22 19:08:41 by jmucuate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char a;

	a = 42;
	while (a <= 57)
	{
	write(1, &a, 1);
	a++;
	}
}
int main ()
{
	ft_print_numbers();
	return 0;
}
