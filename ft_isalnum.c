/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 10:11:40 by tsehr             #+#    #+#             */
/*   Updated: 2019/05/02 10:24:08 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0')
	|| (c <= 'z' && c >= 'a')
	|| (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
