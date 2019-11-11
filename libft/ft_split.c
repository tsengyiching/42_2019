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

static int	is_char(char const s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	nb_arr(char const *s, char c)
{
	int count;

	count = 0;
	if (*s && !is_char(*s, c))
		count++;
	s++;
	while (*s)
	{
		if (!is_char(*s, c) && is_char(*(s - 1), c))
			count++;
		while (*s && !is_char(*s, c))
			s++;
		while (*s && is_char(*s, c))
			s++;
	}
	return (count);
}

static int	put_arr(char const *s, char c, char **tab, int *i)
{
	int j;
	int k;

	while (*(s + *i) && is_char(*(s + *i), c))
		(*i)++;
	j = 0;
	while (*(s + *i + j) && !is_char(*(s + *i + j), c))
		j++;
	if (!(*tab = malloc(sizeof(char) * (j + 1))))
		return (0);
	k = 0;
	while (*(s + *i) && !is_char(*(s + *i), c))
	{
		(*tab)[k] = *(s + *i);
		k++;
		(*i)++;
	}
	(*tab)[k] = '\0';
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb;
	int		i;
	int		arr;

	i = 0;
	if (!s)
		return (0);
	nb = nb_arr(s, c);
	if (!(tab = malloc(sizeof(char *) * (nb + 1))))
		return (NULL);
	tab[nb] = NULL;
	arr = 0;
	while (arr < nb)
	{
		if (!(put_arr(s, c, &tab[arr], &i)))
		{
			ft_free_tab(tab);
			return (0);
		}
		arr++;
	}
	return (tab);
}
