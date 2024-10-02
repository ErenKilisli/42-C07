/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:35:01 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/19 17:06:20 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)

{
	int	*retrn;
	int	diff;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		diff = max - min;
		retrn = (int *) malloc((diff) * sizeof(int));
		if (retrn == NULL)
			return (NULL);
		i = 0;
		while (i < diff)
		{
			retrn[i] = min + i;
			i++;
		}
		retrn[i] = '\0';
	}
	return (retrn);
}
