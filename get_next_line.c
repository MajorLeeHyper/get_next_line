/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:55:10 by dnelson           #+#    #+#             */
/*   Updated: 2017/01/19 12:23:15 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

/*
** return 1 when a line is read, 0 when reading is completed(end of file?)
** or -1 when an error occurs 
** the static variable declaration allows for the assignment in declaration
*/

int		get_next_line(const int fd, char **line)
{
	static char	*thing = NULL;
	char		**what_am_i_even_doing;
	int			in_case_i_need_it;


	str = ft_strnew(BUFF_SIZE);
}
