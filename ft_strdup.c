/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:24:29 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/17 23:55:09 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> 

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(str) + 1);
	if (dest == 0)
		return (0);
	ft_memcpy(dest, str, ft_strlen(str) + 1);
	return (dest);
}
