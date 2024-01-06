/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:28:16 by seojeon           #+#    #+#             */
/*   Updated: 2023/12/28 02:35:07 by seojeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cnt++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cnt);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, n + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c) + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			words[k++] = ft_strndup(s + j, i - j);
	}
	words[k] = NULL;
	return (words);
}
