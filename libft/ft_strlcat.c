/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:52:28 by hsabir            #+#    #+#             */
/*   Updated: 2021/10/14 12:24:22 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tmp;
	size_t	len;

	tmp = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	tmp = len;
	while (src[len - tmp] && len + 1 < size)
	{
		dst[len] = src[len - tmp];
		len++;
	}
	if (tmp < size)
		dst[len] = '\0';
	return (tmp + ft_strlen(src));
}
