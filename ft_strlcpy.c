/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 13:44:20 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 13:33:54 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	i;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	i = 0;
	s = (char *)src;
	src_len = ft_strlen(s);
	if (size != 0)
	{
		while (s[i] && i < size - 1)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
