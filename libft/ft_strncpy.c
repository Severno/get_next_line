/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:39:50 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (dst || src)
	{
		while (src[i] && i < len)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
			dst[i++] = '\0';
		return (dst);
	}
	return (NULL);
}
