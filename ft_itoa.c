/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:37:32 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/27 02:43:28 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	len = ft_numlen(n);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (n == -2147483648)
		return (ft_strlcpy(dest, "-2147483648", 12), dest);
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (len > 0 && n != 0)
	{
		dest[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}
