/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:54:35 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/19 12:38:12 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		diff = max - min;
		*range = (int *) malloc((diff) * sizeof(int));
		if (*range == NULL)
			return (-1);
		i = 0;
		while (i < diff)
		{
			(*range)[i] = min + i;
			i++;
		}
	}
	return (diff);
}
