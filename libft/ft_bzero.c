/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:14 by jremy             #+#    #+#             */
/*   Updated: 2022/01/10 15:04:51 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__bzero(void *pt, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *) pt)[i] = 0;
		i++;
	}
}
