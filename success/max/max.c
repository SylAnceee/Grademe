/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:35:58 by abreuil           #+#    #+#             */
/*   Updated: 2025/03/19 19:40:38 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = tab[0];
	while (tab[i])
	{
		if (tab[i] > max)
		{
			max = tab[i];
			return (max);
		}
		i++;
	}
	return (0);
}