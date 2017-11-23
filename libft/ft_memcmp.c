/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le101.fr>       +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/09 11:54:02 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:59:18 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*t;
	unsigned const char	*d;
	size_t				i;

	t = s1;
	d = s2;
	i = 0;
	while (i < n)
	{
		if (t[i] != d[i])
			return (t[i] - d[i]);
		i++;
	}
	return (0);
}
