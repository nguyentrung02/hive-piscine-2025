/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:51:49 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/27 10:38:34 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (i < size - dest_len - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
