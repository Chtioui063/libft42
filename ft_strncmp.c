/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:13:30 by achtioui          #+#    #+#             */
/*   Updated: 2023/04/24 17:04:51 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	while ((unsigned char) first[i] == (unsigned char) second[i]
		&& (first[i] || second[i]) && i < length - 1)
		i++;
	if (length)
		return ((unsigned char) first[i] - (unsigned char) second[i]);
	else
		return (0);
}

/*int	main(void)
{
	char	First[] = "Ballo";
	char	Second[] = "Ballozr";

	printf("Retour : %d\n", ft_strncmp(First, Second, 6));
	return (0);
}*/
