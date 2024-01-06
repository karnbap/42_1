/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:47:53 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/29 13:31:56 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*origin;

	origin = (unsigned char *)s;
	while (n--)
	{
		if (*origin == (unsigned char)c)
			return (origin);
		origin++;
	}
	return (NULL);
}
