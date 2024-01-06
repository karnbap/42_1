/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:46:47 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/26 15:03:20 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*temp_d;
	char	*temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (len--)
			temp_d[len] = temp_s[len];
	else
		while (len--)
			*temp_d++ = *temp_s++;
	return (dest);
}
