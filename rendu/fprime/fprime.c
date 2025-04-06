/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:57:21 by abreuil           #+#    #+#             */
/*   Updated: 2025/04/07 00:10:48 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void f_prime(int number)
{
	int prime = 2;
	
	if (number == 1)
	{
		printf("1");
		return;
	}
	while (prime <= number)
	{
		if ((number % prime) == 0)
		{
			printf("%d", prime);
			if (number != prime)
				printf("*");
			number /= prime;
		}
		else
			prime++;
	}
}


int main(int ac, char **av)
{
	
	if (ac == 2)
	{
		f_prime(atoi(av[1]));
	}	
	printf("\n");
	return 0;
}