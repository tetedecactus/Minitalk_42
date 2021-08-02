/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:09:00 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/02 14:06:37 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char_to_bit(int pid, unsigned char ch)
{
	unsigned int bit;

	bit = 8;
	while (bit != 0)
	{
		if (ch & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit >>= 1;
		usleep(25);
	}
} 

int main(int argc, char *argv[])
{
    char *string;
    pid_t pid;
    
    if (argc == 3)
    {
        string = argv[2];
        string_sent(pid, string);      
    }
    else
        ft_putstr("Error");
}
