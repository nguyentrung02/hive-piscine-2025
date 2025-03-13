/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:29:18 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/08 11:40:30 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*current;

	if (size <= 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(total_len(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	i = 0;
	current = result;
	while (i < size)
	{
		current = ft_strcpy(current, strs[i]);
		if (i++ < size - 1)
			current = ft_strcpy(current, sep);
	}
	*current = '\0';
	return (result);
}
