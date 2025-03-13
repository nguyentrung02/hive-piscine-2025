/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:25:41 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/04 11:44:44 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i] && argc != 1)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
