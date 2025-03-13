/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:41:33 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/13 11:54:02 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while(tab[i] != 0)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
