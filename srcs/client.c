/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:09:00 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/04 12:58:55 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	send_char_to_bit(pid_t pid, char ch)
{
	int bit;

	bit = 0;
	while (bit < 8)
	{
		if (ch & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(100);
	}
}

void 	send_string(pid_t pid, char *string)
{
	while (*string)
	{
		send_char_to_bit(pid, *string);
		string++;
	}
	send_char_to_bit(pid, '\0');
}


int main(int argc, char *argv[])
{
    char *string;
    pid_t pid;
    
    if (argc == 3)
    {
		pid = ft_atoi(argv[1]);
		string = argv[2];
		send_string(pid, string);
    }
    else
        ft_putstr("Error\n");
	return (0);
}
