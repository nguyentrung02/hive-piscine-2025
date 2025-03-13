/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:43:44 by trungngu          #+#    #+#             */
/*   Updated: 2025/02/27 13:29:26 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (nb > 0 && src[j])
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
