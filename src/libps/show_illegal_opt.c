/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_illegal_opt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franzkemmerich <franzkemmerich@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:41:25 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 20:11:09 by franzkemmer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps.h"

void			show_illegal_opt(int g_optopt)
{
	ft_printf("checker: illegal option -- %c\n\
	Try \'checker -h\' for more information.", g_optopt);
}
