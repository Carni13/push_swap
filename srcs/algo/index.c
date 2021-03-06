/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:13:19 by jremy             #+#    #+#             */
/*   Updated: 2022/01/18 18:32:49 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	__insert_index(t_data *data, int *tab)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = data->a;
	data->min = tab[0];
	data->max = tab[data->size_a - 1];
	while (tmp != NULL)
	{
		while (i < data->size_a)
		{
			if (tmp->nb == tab[i])
				tmp->index = i;
			i++;
		}
		i = 0;
		tmp = tmp->next;
	}
}

void	__sort(t_data *data, int *tab)
{
	int	i;
	int	j;
	int	tmp;
	int	size;

	size = data->size_a;
	i = 0;
	j = 0;
	tmp = 0;
	while (i < size - 1)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	__insert_index(data, tab);
}

int	__index(t_data *data)
{
	int		i;
	int		*tab;
	t_stack	*tmp;

	i = 0;
	if (!data->a)
		return (0);
	tmp = data->a;
	__size_stack_ab(data);
	tab = malloc(sizeof(int) * data->size_a);
	if (!tab)
		return (-1);
	while (tmp != NULL)
	{
		tab[i] = tmp->nb;
		tmp = tmp->next;
		i++;
	}
	__sort(data, tab);
	free(tab);
	return (0);
}
