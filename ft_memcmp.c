/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:14:15 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 16:37:01 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*ptra;
	unsigned char	*ptrb;
	size_t			i;

	ptra = (unsigned char *)ptr1;
	ptrb = (unsigned char *)ptr2;
	i = 0;
	while (i < size)
	{
		if (ptra[i] != ptrb[i])
			return (ptra[i] - ptrb[i]);
				i++;
	}
	return (0);
}
