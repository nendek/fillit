/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <arobion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 09:45:29 by arobion           #+#    #+#             */
/*   Updated: 2017/11/22 19:29:46 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"
# define BUFF_SIZE 21

typedef struct		s_point
{
	int		x;
	int		y;
	char	value;
}					t_point;

typedef struct		s_tetri
{
	t_point			tab[4];
	struct s_tetri	*next;
}					t_tetri;

char				**ft_clearmap(char **map, int size);
void				ft_putmap(char **map, int c);
void				ft_clear_list(t_tetri **begin_list);
int					ft_solver(char **map, t_tetri *begin_list);
char				**ft_create_map(int size);
int					ft_read_file(char *str, t_tetri **begin_list);
t_tetri				*ft_tetri_list_pushback(t_tetri **begin_list);
t_tetri				*ft_tetri_value(char *l, int value, t_tetri *list);

#endif
