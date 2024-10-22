/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 07:51:40 by fnicolau          #+#    #+#             */
/*   Updated: 2024/10/20 16:41:15 by fnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c);
void	print_y(int x, int y);
void	print_y_middle_char(int horizontal_space_quantity);
void	print_horizontal_spaces(int quantity);
void	print_x(int x, int y, bool must_print_y);

void	print_x(int x, int y, bool must_print_y)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	if (must_print_y)
		print_y(x, y);
}

void	print_y(int x, int y)
{
	int		i;
	bool	should_back_here;
	int		max_y_char_quantity;
	int		horizontal_space_quantity;

	i = 0;
	should_back_here = false;
	max_y_char_quantity = y - 2;
	horizontal_space_quantity = x - 2;
	if (max_y_char_quantity < 0)
		return ;
	while (i < max_y_char_quantity)
	{
		print_y_middle_char(horizontal_space_quantity);
		i++;
	}
	if (max_y_char_quantity > 0)
	{
		ft_putchar('\n');
		print_x(x, y, should_back_here);
	}
}

void	print_y_middle_char(int horizontal_space_quantity)
{
	ft_putchar('\n');
	ft_putchar('|');
	if (horizontal_space_quantity >= 0)
	{
		print_horizontal_spaces(horizontal_space_quantity);
		ft_putchar('|');
	}
}

void	print_horizontal_spaces(int quantity)
{
	int	i;

	i = 0;
	while (i < quantity)
	{
		ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
		print_x(x, y, true);
	else
		write(1, "[WARNING] x or y must be values >= 1", 37);
}
