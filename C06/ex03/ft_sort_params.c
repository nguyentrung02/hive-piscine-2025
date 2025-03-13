/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:12:24 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/04 11:43:03 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	sort_args(char **args, int count)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
			{
				temp = args[j];
				args[j] = args[j + 1];
				args[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc < 2)
		return (0);
	sort_args(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
