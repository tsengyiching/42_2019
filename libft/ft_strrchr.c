/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 15:56:34 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 16:46:51 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	if (ptr[len] == c)
		return (char *)(s + len);
	len--;
	while (len >= 0)
	{
		if (ptr[len] == c)
			return (char *)(s + len);
		len--;
	}
	return (0);
}
