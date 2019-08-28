/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:12:22 by vscott            #+#    #+#             */
/*   Updated: 2019/07/02 11:27:55 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_2d(char **str2d)
{
	if (!str2d)
	{
		ft_putendl("(null)");
		return ;
	}
	while (*str2d)
	{
		ft_putendl(*str2d);
		str2d++;
	}
}
