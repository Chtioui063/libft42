/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:16:28 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 17:14:38 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (j);
}

int	word_len(const char *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_getword(const char *s, char c, int start)
{
	int		i;
	int		j;
	int		len;
	char	*word;

	i = start;
	j = 0;
	len = word_len(s, c, start);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	while (s[i] && s[i] != c)
	{
		word[j++] = s[i++];
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**r;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	r = malloc (sizeof (char *) * (count_word (s, c) + 1));
	if (!r)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			r[j++] = ft_getword(s, c, i++);
		}
		while (s[i] != c && s[i])
			i++;
	}
	r[j] = 0;
	return (r);
}
