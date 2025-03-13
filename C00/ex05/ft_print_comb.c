/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:47:00 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/22 10:56:08 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_commas(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '9')
	{
		second = first + 1;
		while (second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_putchar(first, second, third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_commas();
				}
				third++;
			}
			second++;
		}
		first++;
	}
}
