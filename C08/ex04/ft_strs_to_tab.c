/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:15:10 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/10 12:43:41 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = malloc(sizeof (char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof (t_stock_str) * (ac + 1));
	if (stocks == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strcpy(av[i], stocks[i].size);
		i++;
	}
	stocks[i].size = 0;
	stocks[i].str = NULL;
	stocks[i].copy = NULL;
	return (stocks);
}
