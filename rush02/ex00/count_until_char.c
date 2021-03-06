/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_until_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:51:01 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/20 20:12:32 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_until_char(char *str, char c)
{
	int index;

	index = 0;
	while (*str && *(str++) != c)
		index++;
	return (index);
}
