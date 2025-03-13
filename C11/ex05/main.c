/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:57:38 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/13 14:17:29 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' && str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	}
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
