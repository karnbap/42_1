/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:30:10 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/13 21:37:39 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*origin1;
	const unsigned char	*origin2;

	origin1 = (const unsigned char *)s1;
	origin2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*origin1 != *origin2)
			return (*origin1 - *origin2);
		origin1++;
		origin2++;
	}
	return (0);
}
