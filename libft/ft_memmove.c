/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 19:15:39 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 20:09:58 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	char		*s;
	char		temp[len];

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	return (dst);
}
