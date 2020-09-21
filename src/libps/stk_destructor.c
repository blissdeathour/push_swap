/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_destructor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 14:03:27 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps_stack.h"

static void	del(void *content, size_t size)
{
	if (size && content)
		ft_memdel((void **)&content);
}

void		stk_destructor(t_stack **self)
{
	if ((*self)->size)
		ft_lstdel(&((*self)->top), del);
	ft_memdel((void **)self);
	*self = NULL;
}
