/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 13:43:08 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:22:09 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *begin;

	if (lst && del)
	{
		begin = *lst;
		while (begin)
		{
			(*del)(begin->content);
			*lst = begin->next;
			free(begin);
			begin = *lst;
		}
	}
	lst = NULL;
}
