/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:35:56 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps.h"

void	throw_right(t_push_swap *ps, size_t q)
{
	while (q--)
	{
		if (((t_ps *)ps->a->top->content)->index == ps->sorted + 1)
		{
			ps->make_move(ps, "ra");
			ps->sorted++;
		}
		else
			ps->make_move(ps, "pb");
	}
}
