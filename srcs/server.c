/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:29:31 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/24 14:16:18 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	bit_hanlder(int signaux)
{
	static int	bit_recu = 0;
	static char	ch = 0;

	if (signaux == SIGUSR1)
		ch |= (1 << bit_recu);
	bit_recu++;
	if (bit_recu == 8)
	{
		write(1, &ch, 1);
		if (ch == '\0')
			ft_putchar('\n');
		bit_recu = 0;
		ch = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr(pid);
	ft_putchar('\n');
	signal(SIGUSR1, bit_hanlder);
	signal(SIGUSR2, bit_hanlder);
	while (1)
		pause();
	return (0);
}
