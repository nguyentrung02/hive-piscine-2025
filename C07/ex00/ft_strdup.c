/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:26:58 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/04 12:30:38 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
