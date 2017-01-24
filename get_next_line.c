/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:55:10 by dnelson           #+#    #+#             */
/*   Updated: 2017/01/24 12:32:36 by dnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>

/*
** return 1 when a line is read, 0 when reading is completed(end of file?)
** or -1 when an error occurs 
** the static variable declaration allows for the assignment in declaration
*/

int		get_next_line(const int fd, char **line)
{
	static char	*thing = NULL;
	char		holder[BUFF_SIZE + 1];
	char		*nl;
	int			stuff;

	while ((stuff = read(fd, holder, BUFF_SIZE)) > 0)
	{
		holder[stuff] = '\0';
		if (nl = (ft_strchr(holder, '\n')))
		{
			*line = ft_strndup(holder, nl - holder);
			thing = nl + 1;
			return (1);
		}
	}
	/*this seems like it would be a useful step*/	
}
