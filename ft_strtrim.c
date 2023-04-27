/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:45:06 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 17:05:21 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	deb;
	size_t	fin;

	deb = 0;
	fin = ft_strlen(s1);
	if (!s1)
		return (0);
	if (!set)
		return ((char *) s1);
	while (ft_strchr(set, s1[deb]) && s1[deb])
		deb++;
	if (deb == fin)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[fin - 1]) && deb < fin)
		fin--;
	return (ft_substr(s1, deb, fin - deb));
}
