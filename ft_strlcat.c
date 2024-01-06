/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:16:03 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 02:24:25 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t final_size)
{
	size_t	len_dst;
	size_t	count_src;

	if (!src || (dst == NULL && final_size == 0))
		return (0);
	len_dst = ft_strlen(dst);
	if (final_size <= len_dst)
		return (final_size + ft_strlen(src));
	count_src = 0;
	while (src[count_src] && len_dst + count_src + 1 < final_size)
	{
		dst[len_dst + count_src] = src[count_src];
		count_src++;
	}
	if (len_dst + count_src < final_size)
		dst[len_dst + count_src] = '\0';
	return (len_dst + ft_strlen(src));
}
