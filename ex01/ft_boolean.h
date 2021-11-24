/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:04:54 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/23 13:03:05 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 			1
# define FALSE 			0
# define SUCCESS 		1
# define EVEN_MSG 		"I have an even number of argments."
# define ODD_MSG 		"I have an odd number of arguments."

# define EVEN(x)		(((x) % 2) == (0))

typedef int	t_bool;

void	ft_putstr(char *str);
int		main(int argc, char **argv);
t_bool	ft_is_even(int nbr);

#endif
