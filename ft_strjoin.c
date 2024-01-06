/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:24:32 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 08:26:57 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!str1 || !str2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
		dest[j++] = str1[i++];
	i = 0;
	while (str2[i])
		dest[j++] = str2[i++];
	dest[j] = '\0';
	return (dest);
}
