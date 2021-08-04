/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 10:56:20 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/04 12:27:52 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

size_t	ft_strlen(const char *str);

int	ft_atoi(const char *str);

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);


#endif