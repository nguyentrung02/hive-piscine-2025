/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:35:35 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/10 12:20:50 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
			ft_putchar(nb + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	len;

	if (par == NULL)
		return ;
	while (par->str != NULL)
	{
		write(1, par->str, par->size);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		len = 0;
		while (par->copy[len] != '\0')
			len++;
		write(1, par->copy, len);
		ft_putchar('\n');
		par++;
	}
}
