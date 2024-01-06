/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:22:57 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/17 23:57:24 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start_index, size_t len)
{
	char	*dest;
	size_t	str_len;
	size_t	i;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start_index >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start_index)
		len = str_len - start_index;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && str[start_index + i])
	{
		dest[i] = str[start_index + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
