/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:05:34 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/24 11:37:31 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}
