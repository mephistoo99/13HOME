/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaarou <mchaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:04:03 by mchaarou          #+#    #+#             */
/*   Updated: 2026/10/27 10:54:17 by mchaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*ptr2;

	if (n == 0)
		return (dest);
	if (!dest || !source)
		return (NULL);
	ptr2 = (unsigned char *)dest;
	ptr = (const unsigned char *)source;
	while (n-- > 0)
		*ptr2++ = *ptr++;
	return (dest);
}
