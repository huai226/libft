/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 16:51:18 by sshih             #+#    #+#             */
/*   Updated: 2018/05/01 17:40:29 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	if (s && n > 0)
		while (i < n)
		{
			if (cpy[i] == (unsigned char) c)
				return((void *) (s + i));
				i++;
		}
	return (NULL);
}
