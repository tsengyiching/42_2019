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

static int		str_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	return (start);
}

static int		str_end(char const *s1, char const *set)
{
	int end;

	end = ft_strlen(s1) - 1;
	while (end > 0 && is_set(s1[end], set) && *s1)
		end--;
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (s1 && set)
	{
		start = str_start(s1, set);
		if (start == (int)ft_strlen(s1))
			return (ft_calloc(1, 1));
		end = str_end(s1, set);
		if (!(res = ft_calloc(sizeof(char), (end - start + 2))))
			return (NULL);
		while (start <= end)
			res[i++] = s1[start++];
		return (res);
	}
	return (NULL);
}
