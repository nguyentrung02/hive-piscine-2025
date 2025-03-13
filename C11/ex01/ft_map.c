/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:07:47 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/12 15:19:14 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	if (length <= 0 || !tab || !f)
		return (NULL);
	res = malloc(length * sizeof(int));
	if (!res)
		return (NULL);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
