/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:02:01 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps_stack.h"

static int	ascending(t_list *cur, t_list *next)
{
	return (((t_ps *)cur->content)->index < ((t_ps *)next->content)->index);
}

static int	descending(t_list *cur, t_list *next)
{
	return (((t_ps *)cur->content)->index > ((t_ps *)next->content)->index);
}

int			stk_sorted(t_stack *self)
{
	t_list	*ptr;
	int		(*cmp)(t_list *, t_list *);

	ptr = self->top;
	if (!ptr || !ptr->next)
		return (ASCENDING | DESCENDING);
	cmp = (ascending(ptr, ptr->next) ? ascending : descending);
	ptr = ptr->next;
	while (ptr->next)
	{
		if (!cmp(ptr, ptr->next))
			return (UNSORTED);
		ptr = ptr->next;
	}
	return (cmp == ascending ? ASCENDING : DESCENDING);
}
