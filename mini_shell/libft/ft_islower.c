/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdurand <tdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:20:43 by tdurand           #+#    #+#             */
/*   Updated: 2014/11/07 15:27:35 by tdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
