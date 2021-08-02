/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:29:31 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/02 15:49:26 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    char_handler()
{
    
}

int main()
{
    pid_t pid;
    
    pid = getpid();
    signal(SIGUSR1, char_handler);
    signal(SIGUSR2, char_handler);

}