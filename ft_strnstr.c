/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:54:29 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 08:47:16 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *target, const char *find, size_t len)
{
	size_t	target_i;
	size_t	find_i;

	if (!find[0])
		return ((char *)target);
	if (len == 0)
		return (NULL);
	target_i = 0;
	while (target_i < len && target[target_i])
	{
		find_i = 0;
		while (target_i + find_i < len && target[target_i + find_i]
			== find[find_i] && find[find_i])
			find_i++;
		if (find[find_i] == '\0')
			return ((char *)target + target_i);
		target_i++;
	}
	return (NULL);
}
