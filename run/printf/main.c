/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: rrabetsy <marvin@42.fr>                    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/03/20 11:52:25 by rrabetsy          #+#    #+#             */
/*   Updated: 2024/03/20 15:47:07 by rrabetsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
	exemple_c();
	// printf("123");
	ft_printf("str:\033[1;35m'\033[0mBonjour c:%c %s<{red;b;blk;}>!\033[35;1m'\033[0m\n", 'R', "rolio");
	return (0);
}
