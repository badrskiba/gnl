/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:59:17 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/11 18:09:39 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlen(const char *s)
{
	size_t		i;
	const char	*tmp;

	i = 0;
	tmp = s;
	while (tmp[i] != '\0')
	{
		i++;
	}
	return (i);
}
