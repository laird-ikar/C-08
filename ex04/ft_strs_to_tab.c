/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:08:27 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/24 15:54:46 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include "unistd.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	res = malloc(sizeof(t_stock_str[ac]) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].str = ft_strdup(av[i]);
		if (!res[i].str)
			return (NULL);
		res[i].copy = ft_strdup(av[i]);
		if (!res[i].copy)
			return (NULL);
		res[i].size = ft_strlen(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	dst = (char *) malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
