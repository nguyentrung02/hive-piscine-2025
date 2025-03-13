/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trungngu <trungngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:12:33 by trungngu          #+#    #+#             */
/*   Updated: 2025/03/06 12:12:41 by trungngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

#  define EVEN(NBR) (NBR % 2 == 0)

#  define TRUE 1

#  define FALSE 0

#  define SUCCESS 0

#  define EVEN_MSG "I have an even number of arguments.\n"

#  define ODD_MSG "I have an odd number of arguments.\n"

typedef int		t_bool;
t_bool			ft_is_even(int nbr);

#endif
