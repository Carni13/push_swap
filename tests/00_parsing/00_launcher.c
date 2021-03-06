/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:04:29 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 15:31:34 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int	ft00_launcher(t_score *score)
{
	t_utest	*testlist;
	int		res;

	testlist = NULL;
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "int_min", &__int_min);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "int_max", &__int_max);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "doublons", &__doublons);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "sort1", &__sort1);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "sort2", &__sort2);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "sort3", &__sort3);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "char", &__char);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "empty", &__empty);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "empty2", &__empty2);
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "PARSING", "empty3", &__empty3);		
	res = __launcher(testlist, score);
	return (res);
}
