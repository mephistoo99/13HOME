/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaarou <mchaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:11:39 by mchaarou          #+#    #+#             */
/*   Updated: 2026/10/15 19:12:48 by mchaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s) {
    if (s == NULL) return NULL;
    size_t len = strlen(s) + 1; 
    char *dup = malloc(len);    
    if (dup != NULL)
        memcpy(dup, s, len);   
    return dup;                
}
