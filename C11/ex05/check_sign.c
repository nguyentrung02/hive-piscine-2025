/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:04:01 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/13 13:04:27 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	check_sign(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size == 1 && (str[0] == '+' || str[0] == '-' || str[0] == '*'
			|| str[0] == '/' || str[0] == '%'))
		return (str[0]);
	return (0);
}
