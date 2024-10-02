/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:01:08 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/19 11:49:47 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)

{
	char	*dest;
	int		length;

	length = 0;
	while (src[length] != '\0')
		length++;
	dest = (char *) malloc((length + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
