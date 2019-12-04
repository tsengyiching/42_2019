/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 12:36:04 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:41:25 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*search;
	char	*find;
	int		needle_len;
	size_t	i;
	size_t	j;

	search = (char *)haystack;
	find = (char *)needle;
	needle_len = ft_strlen(find);
	if (needle_len == 0)
		return (char *)haystack;
	i = 0;
	while (search[i])
	{
		j = 0;
		while (search[i + j] == find[j] && find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return (char *)(search + i);
		i++;
	}
	return (0);
}
