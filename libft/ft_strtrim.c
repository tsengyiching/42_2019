/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 16:36:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:14:39 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		end;
	int		total_set;
	char	*dst;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = 0;
	len = ft_strlen(s1);
	while (is_set(s1[start], set))
		start++;
	while (len-- && (is_set(s1[len], set)))
		end++;
	if ((end + start) <= len)
		total_set = end + start;
	else
		total_set = 0;
	len = ft_strlen(s1) - total_set;
	if (!(dst = ft_calloc(sizeof(char), (len))))
		return (NULL);
	return (dst = ft_substr(s1, start, len));
}
