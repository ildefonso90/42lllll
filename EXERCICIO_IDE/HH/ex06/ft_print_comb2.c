/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmucuate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:15:50 by jmucuate          #+#    #+#             */
/*   Updated: 2024/10/21 13:15:56 by jmucuate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_number(int a) 
{
    t_putchar((a / 10) + '0'); 
    t_putchar((a % 10) + '0');
}
void ft_print_comb2(void);
void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    b = 0;

    while (a > 99)
    {
        ft_putchar((a / 10) + '0');
        ft_putchar((a % 10) + '0');
        b++;  
    }
}
int main ()
{

}