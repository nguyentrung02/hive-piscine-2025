/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:05:34 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/24 11:45:48 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
