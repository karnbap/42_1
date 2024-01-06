/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:23:30 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 09:35:53 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*origin;

	if (nmemb && SIZE_MAX / nmemb < size)
		return (NULL);
	origin = (void *)malloc(nmemb * size);
	if (!origin)
		return (NULL);
	ft_bzero(origin, nmemb * size);
	return (origin);
}
