/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 22:53:56 by abreuil           #+#    #+#             */
/*   Updated: 2025/04/06 23:35:21 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;
	
	if (a == 0 || b == 0)
		return 0;

	lcm  = (a > b) ? a : b;

	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
			return lcm;			
		lcm++;
	}
}