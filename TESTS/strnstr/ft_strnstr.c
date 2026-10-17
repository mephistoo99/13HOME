/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaarou <mchaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:22:13 by mchaarou          #+#    #+#             */
/*   Updated: 2026/10/16 11:02:39 by mchaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *tgt, size_t len)
{
	size_t	t_len;
	size_t	i;
	size_t	j;

	if (!src || !tgt)
		return (NULL);
	if (!*tgt)
		return ((char *)src);
	t_len = ft_strlen(tgt);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == tgt[j] && src[i + j] && (i + j) < len)
			j++;
		if (j == t_len)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
