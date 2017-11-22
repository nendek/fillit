/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <arobion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:11:00 by arobion           #+#    #+#             */
/*   Updated: 2017/11/22 19:25:25 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_clearmap(char **map, int size)
{
	int		i;

	i = 0;
	if (map)
	{
		while (i < size)
		{
			free(map[i]);
			map[i] = NULL;
			i++;
		}
		free(map);
		map = NULL;
		return (map);
	}
	return (NULL);
}

char	**ft_create_map(int size)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	map = malloc(sizeof(char *) * size + 1);
	while (i < size)
	{
		map[i] = ft_strnew(size);
		i++;
	}
	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (map);
}

void	ft_putmap(char **map, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (map)
	{
		while (i <= c)
		{
			while (j <= c)
			{
				ft_putchar(map[i][j]);
				j++;
			}
			j = 0;
			i++;
			ft_putchar('\n');
		}
	}
}
