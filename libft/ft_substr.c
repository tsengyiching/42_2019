/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 15:41:11 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 18:03:20 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		dst = malloc(sizeof(char) * 1);
		*dst = '\0';
		return (dst);
	}
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
