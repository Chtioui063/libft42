/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:44:00 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 16:40:38 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t taille)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *) str;
	while (i < taille)
	{
		s[i] = val;
		i++;
	}
	return (str = s);
}
