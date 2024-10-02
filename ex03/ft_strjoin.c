/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:39:42 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/19 19:40:51 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	handle_mallocsize(int size, char **strs, char *sep, int *malloclength)

{
	int	j;
	int	strslength;
	int	seplength;

	j = 0;
	*malloclength = 0;
	while (j < size)
	{
		strslength = 0;
		while (strs[j][strslength] != '\0')
			strslength++;
		if (j < size - 1)
		{
			seplength = 0;
			while (sep[seplength] != '\0')
				seplength++;
		}
		j++;
	}
	*malloclength = seplength + strslength;
}

// FOR SIGABORT ERROR
// void	handle_mallocsize(int size, char **strs, char *sep, int *malloclength)
// {
// 	int	j;
// 	int	strslength;
// 	int	seplength;

// 	j = 0;
// 	*malloclength = 0;
// 	seplength = 0;
// 	while (sep[seplength] != '\0')
// 		seplength++;

// 	while (j < size)
// 	{
// 		strslength = 0;
// 		while (strs[j][strslength] != '\0')
// 			strslength++;
// 		*malloclength += strslength;
// 		if (j < size - 1)
// 		{
// 			*malloclength += seplength;
// 		}
// 		j++;
// 	}
// }

void	ft_strcpy(char *dest, char *src, int *r)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*r] = src[i];
		i++;
		(*r)++;
	}
}

void	handle_returnstring(int size, char **strs, char *sep, char *retrn)

{
	int	j;
	int	r;

	j = 0;
	r = 0;
	while (j < size)
	{
		ft_strcpy(retrn, strs[j], &r);
		if (j < size - 1)
		{
			ft_strcpy(retrn, sep, &r);
		}
		j++;
	}
	retrn[r] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)

{
	char	*retrn;
	int		malloclength;

	handle_mallocsize(size, strs, sep, &malloclength);
	retrn = (char *) malloc(sizeof(char) * (malloclength + 1));
	if (retrn == NULL)
		return (NULL);
	if (size == 0)
	{
		retrn[0] = '\0';
		return (retrn);
	}
	else
	{
		handle_returnstring(size, strs, sep, retrn);
		return (retrn);
	}
}
