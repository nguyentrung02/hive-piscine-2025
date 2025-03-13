/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:34:16 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/02 13:35:40 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	while (i <= nb)
		result *= i++;
	return (result);
}
