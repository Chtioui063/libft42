/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:28:31 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 16:30:46 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*dst;

	dst = malloc(elementCount * elementSize);
	if (!dst)
		return (NULL);
	ft_bzero(dst, elementCount * elementSize);
	return (dst);
}
