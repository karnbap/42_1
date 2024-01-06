/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:01:19 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/26 15:02:35 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int value, size_t size)
{
	char	*temp;

	temp = (char *)s;
	while (size--)
		*temp++ = (char)value;
	return (s);
}
