/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:31:44 by mawinter          #+#    #+#             */
/*   Updated: 2022/11/15 20:18:34 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	if (!src || !dst)
		return (0);
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= destlen)
		return (srclen + dstsize);
	if (dstsize != 0)
	{
		while (i + destlen < dstsize - 1 && i < srclen)
		{
			dst[i + destlen] = src[i];
			i++;
		}
		dst[i + destlen] = '\0';
	}
	return (destlen + srclen);
}
