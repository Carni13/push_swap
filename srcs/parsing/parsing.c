/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:52:38 by jremy             #+#    #+#             */
/*   Updated: 2022/01/18 14:31:19 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	__exit(char**str, t_data *data)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
	(void)data;
	write(2,"Error\n",6);
	exit(1);
}

int	__check(char **str, t_data *data)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (__atol(str[i], data) == -1)
			return (-1);
		i++;
	}
	return (0);
}

void	__parsing(char **input, t_data *data)
{
	int		i;
	char	*tmp;
	char	**split_tmp;

	i = 1;
	tmp = __strdup(" ");
	while (input[i])
	{
		tmp = __strjoin(tmp, input[i]);
		tmp = __strjoin(tmp, " ");
		i++;
	}
	split_tmp = __split(tmp, ' ');
	free(tmp);
	if (!split_tmp[0])
		exit(0);
	i = 0;
	if (__check(&split_tmp[i], data) == -1)
		__exit(split_tmp, data);
	while (split_tmp[i])
	{
		free(split_tmp[i]);
		i++;
	}
	free(split_tmp);
}
