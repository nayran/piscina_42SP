/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:14:47 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/22 03:41:58 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*aux;
	int		x;

	x = 0;
	aux = (char *)malloc(sizeof(x));
	while (src[x] != '\0')
	{
		aux[x] = src[x];
		x++;
	}
	aux[x] = '\0';
	return (&aux[0]);
}
