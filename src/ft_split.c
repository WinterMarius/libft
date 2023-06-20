/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawinter <mawinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:54:10 by mawinter          #+#    #+#             */
/*   Updated: 2022/03/26 22:00:51 by mawinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	counter(char const *s, char c)
{
	int	i;
	int	len;
	int	counter;

	counter = 0;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

int	ltr(const char *s, char c, int index)
{
	int	count;

	count = 0;
	while (0 <= index)
	{
		if (s[index] != c)
			count++;
		else
			return (count);
		index--;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		len;
	int		strcount;
	int		allctr;

	if (s == NULL)
		return (NULL);
	allctr = 0;
	strcount = counter(s, c);
	i = 0;
	len = ft_strlen(s);
	arr = (char **)malloc(sizeof(char *) * (strcount + 1));
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			arr[allctr++] = ft_substr(s, 1 + i - ltr(s, c, i), ltr(s, c, i));
		i++;
	}
	arr[strcount] = NULL;
	return (arr);
}
