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
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
