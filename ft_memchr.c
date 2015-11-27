/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:33:47 by jbyttner          #+#    #+#             */
/*   Updated: 2015/11/25 15:33:49 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	UCHAR	*result;

	i = 0;
	result = (UCHAR *)s;
	while (i < n && result[i] != c)
		i++;
	if (i == n)
		result = 0;
	return (result);
}