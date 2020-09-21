/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libps.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 19:55:31 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPS_H

# define LIBPS_H

# include "libps_push_swap.h"
# include "libft.h"

# define FLAGS "vcqsh"

size_t			throw_right_median(t_push_swap *ps, size_t median);
size_t			throw_left_median(t_push_swap *ps, size_t median);
void			throw_left_sorted(t_push_swap *ps);
void			throw_right(t_push_swap *ps, size_t	q);

void			show_help_msg(void);
void			show_illegal_opt(int g_optopt);
void			clear_if_step(t_push_swap *ps);

void			solve_push_swap(t_push_swap *ps);

#endif
