/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <arobion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 17:27:29 by arobion           #+#    #+#             */
/*   Updated: 2017/11/22 19:29:06 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	**map;
	t_tetri *begin_list;

	map = NULL;
	begin_list = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: fillit target\n");
		return (0);
	}
	if (!(ft_read_file(argv[1], &begin_list)))
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!(ft_solver(map, begin_list)))
		return (0);
	ft_clear_list(&begin_list);
	return (0);
}
