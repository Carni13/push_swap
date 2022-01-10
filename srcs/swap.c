/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:10:39 by jremy             #+#    #+#             */
/*   Updated: 2022/01/10 16:11:49 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	__sa(t_data *data)
{
	t_stack	*tmp;

	printf("sa\n");
	if (!data->a || !data->a->next)
		return ;
	tmp = data->a;
	data->a = data->a->next;
	tmp->next = data->a->next;
	data->a->next = tmp;
	return ;
}

void	__sb(t_data *data)
{
	t_stack	*tmp;

	printf("sb\n");
	if (!data->b || !data->b->next)
		return ;
	tmp = data->b;
	data->b = data->b->next;
	tmp->next = data->b->next;
	data->b->next = tmp;
	return ;
}

void	__ss_a(t_data *data)
{
	t_stack	*tmp;
	if (!data->a || !data->a->next)
		return ;
	tmp = data->a;
	data->a = data->a->next;
	tmp->next = data->a->next;
	data->a->next = tmp;
	return ;
}

void	__ss_b(t_data *data)
{
	t_stack	*tmp;

	if (!data->b || !data->b->next)
		return ;
	tmp = data->b;
	data->b = data->b->next;
	tmp->next = data->b->next;
	data->b->next = tmp;
	return ;
}

void	__ss(t_data *data)
{
	printf("ss\n");
	__ss_a(data);
	__ss_b(data);
	return ;
}