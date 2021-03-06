/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:48:19 by jremy             #+#    #+#             */
/*   Updated: 2022/01/10 15:04:51 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__putchar_fd(char c, int fd)
{	
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
