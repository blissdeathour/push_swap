/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_left_median.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:59:16 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps.h"

size_t	throw_left_median(t_push_swap *ps, size_t median)
{
	size_t	thrown;

	thrown = 0;
	if (ps->b->size / 2 < 13)
		median = ps->b->minimum + 12;
	while (ps->b->maximum != median)
	{
		if (((t_ps *)ps->b->top->content)->index > median)
		{
			ps->make_move(ps, "pa");
			thrown++;
		}
		else if (((t_ps *)ps->b->top->content)->index == ps->b->minimum)
		{
			ps->make_move(ps, "pa");
			if (((t_ps *)ps->b->top->content)->index <= median)
				ps->make_move(ps, "rr");
			else
				ps->make_move(ps, "ra");
			ps->sorted++;
		}
		else
			ps->make_move(ps, "rb");
	}
	return (thrown);
}
