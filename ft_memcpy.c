/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:43:58 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 02:21:22 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	char	*final_d;
	char	*final_s;

	if (!dst && !src)
		return (NULL);
	final_d = (char *)dst;
	final_s = (char *)src;
	while (size--)
		*final_d++ = *final_s++;
	return (dst);
}
