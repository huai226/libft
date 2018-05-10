/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:59:59 by sshih             #+#    #+#             */
/*   Updated: 2018/05/07 18:24:46 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		if(*str && *str != c)
		{
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	return (i);
}

char	*ft_malloc_word(char const *str, char c)
{
	char *new_word;
	int i;

	i = 0;
	while (str[i] != c)
	   i++;
	new_word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != c)
	{
		new_word[i] = str[i];
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}

char	**ft_strsplit(char const *s, char c)
{
	char **new;
	int i;

	new = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!new || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			new[i] = ft_malloc_word(s, c);
			i++;
			while (*s != c)
				s++;
		}
	}
		new[i] = 0;
		return (new);
}
