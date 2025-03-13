/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:05:34 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/24 11:22:03 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!is_letter(*str))
			return (0);
		str++;
	}
	return (1);
}
