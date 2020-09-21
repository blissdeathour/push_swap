/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_if_step.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:47:20 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps.h"
#include <unistd.h>
#include <stdlib.h>

void	clear_if_step(t_push_swap *ps)
{
	if (ps->step)
	{
		usleep(200000);
		system("clear");
	}
}
