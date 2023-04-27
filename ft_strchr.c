/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:55:49 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 17:00:51 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedchar)
{
	while (*string)
	{
		if (*string == (const char) searchedchar)
			return ((char *) string);
		string++;
	}
	if (*string == (const char) searchedchar)
		return ((char *) string);
	return (NULL);
}
