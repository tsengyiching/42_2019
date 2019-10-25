/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 19:13:41 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 19:14:38 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		is_char(char const s, char c)
{
	if (s == c || !s)
		return (1);
	return (0);
}

static int		nb_arr(char const *s, char c)
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

static int		put_arr(char const *s, char c, char **tab, int *i)
{
	int j;
	int k;

	while (s[*i] && is_char(*(s + *i), c))
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

char	**ft_split(char const *s, char c)
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
	tab[nb] = 0;
	arr = 0;
	while (arr < nb)
	{
		if (!(put_arr(s, c, &tab[arr], &i)))
			return (0);
		arr++;
	}
	return (tab);

}

// #include <stdio.h>

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(void)
// {
// 	int i;
// 	char **tab;

// 	i = 0;
// 	if (!(tab = ft_split("", 'z')))
//         ft_print_result("NULL");
//     else
//         if (!tab[0])
//         	ft_print_result("ok\n");
// 	return (0);
// }