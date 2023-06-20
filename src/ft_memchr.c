/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:48:33 by mawinter          #+#    #+#             */
/*   Updated: 2022/11/15 20:20:09 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cchar;
	unsigned char	*ss;
	size_t			i;

	if (!s)
		return (NULL);
	cchar = (unsigned char)c;
	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cchar)
			return ((void *)s + i);
		i++;
	}
	return ((void *)0);
}
