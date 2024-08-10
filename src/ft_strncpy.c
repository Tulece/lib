/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:08:41 by anporced          #+#    #+#             */
/*   Updated: 2024/08/10 12:08:53 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (++i < len && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}