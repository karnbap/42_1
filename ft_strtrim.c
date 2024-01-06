/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:25:22 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/18 09:33:31 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *jump)
{
	size_t	rev_i;

	if (!str || !jump)
		return (0);
	while (*str && ft_strchr(jump, *str))
		str++;
	rev_i = ft_strlen(str);
	while (rev_i + 1 && ft_strchr(jump, str[rev_i]))
		rev_i--;
	return (ft_substr(str, 0, rev_i + 1));
}
