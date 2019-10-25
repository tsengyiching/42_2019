/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 16:36:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 15:54:08 by yictseng    ###    #+. /#+    ###.fr     */
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
	char	*res;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (s1 != NULL)
	{
		start = 0;
		while (s1[start] && is_set(s1[start], set))
			start++;
		end = strlen(s1);
		if (start == end)
		{
			res = malloc(sizeof(char) * 1);
			return (res);
		}
		while (end > 0 && is_set(s1[end - 1], set))
			end--;
		if (!(res = malloc(sizeof(char) * (end - start + 1))))
			return (NULL);
		while (start <= end)
			*(res + i++) = *(s1 + start++);
		*(res + i) = '\0';
		return (res);
	}
	return (NULL);
}

// int		main(void)
// {
// 	char const *s1 = "      ";
// 	char const *set = "  ";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	return 0;
// }
