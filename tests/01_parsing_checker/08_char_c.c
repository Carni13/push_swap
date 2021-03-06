/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_OK.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:15:37 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 15:20:42 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	__char_c(void)
{
	char buffer[BUFFER_SIZE];
	int file;

	bzero((void *)buffer, BUFFER_SIZE);
	system("cd ..");
	system("./checker 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 a 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 2> res.txt");
	file = open("res.txt", O_RDONLY, 0777);
	read(file, buffer, BUFFER_SIZE);
	if (strcmp(buffer,"Error\n") != 0)
	{
		__log_test("./checker char", "Error\n", buffer);
		return (-1);
	}
	else
	{
		system("valgrind --log-file=\"leak\" ./checker 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 a 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 2> res.txt");
		file = open("leak", O_RDONLY, 0777);
		if (__leaks(file) == 0)
			return (0);
		else 
			return (69);
	}
}
