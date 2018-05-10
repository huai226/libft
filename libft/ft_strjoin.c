/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 17:57:37 by sshih             #+#    #+#             */
/*   Updated: 2018/05/04 18:10:01 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	int len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new || !(s1 && s2))
		return (NULL);
	if (s1)
		ft_strcpy(new, s1);
	if (s2)
		ft_strcat(new, s2);
	return (new);
}
