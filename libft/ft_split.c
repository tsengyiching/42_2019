/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 19:13:41 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 17:13:51 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	nb_arr(char const *s, char c)
{
	int arr;

	arr = 0;
	while (*s)
	{
		if (*s != c)
			arr++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (arr);
}

static void	put_arr(char **tab, char const *s, int arr, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		tab[arr][i] = s[i];
		i++;
	}
}

static int	put_tab(char **tab, char const *s, char c)
{
	int len;
	int arr;

	arr = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (*(s + len) && *(s + len) != c)
			len++;
		if (len != 0)
		{
			if (!(tab[arr] = ft_calloc(sizeof(char), len + 1)))
				return (0);
			put_arr(tab, s, arr, c);
			arr++;
			s = s + len;
		}
		while (*s && *s == c)
			s++;
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		arr;

	if (s == NULL)
		return (NULL);
	arr = nb_arr(s, c);
	if (!(tab = ft_calloc(sizeof(char *), (arr + 1))))
		return (NULL);
	if (!(put_tab(tab, s, c)))
	{
		ft_free_tab(tab);
		return (0);
	}
	return (tab);
}
