/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/27 14:02:45 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:17:36 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*begin;
	int		i;

	i = 0;
	begin = lst;
	while (begin)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}
