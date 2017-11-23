/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le101.fr>       +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 09:29:36 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:08:38 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 16

typedef struct		s_content
{
	char			*str;
	int				fd;
	int				i;
}					t_content;


int		get_next_line(const int fd, char **line);

#endif
