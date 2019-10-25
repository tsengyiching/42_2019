/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 14:56:49 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 19:01:53 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*dst;
	size_t			alloc;

	alloc = (size * count);
	if (!(dst = malloc(alloc)))
		return (NULL);
	ft_bzero(dst, alloc);
	return (dst);
}
