/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:59:01 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/26 12:32:22 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || \
				(str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (upper == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (upper == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
