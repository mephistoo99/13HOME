/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaarou <mchaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:53:47 by mchaarou          #+#    #+#             */
/*   Updated: 2026/10/30 22:29:53 by mchaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*h;
	size_t	total_bytes;

	if (num != 0 && size > ((size_t)-1) / num)
		return (NULL);
	total_bytes = num * size;
	if (total_bytes == 0)
	{
		total_bytes = 1;
	}
	h = malloc(total_bytes);
	if (!h)
		return (NULL);
	ft_memset(h, 0, total_bytes);
	return (h);
}
