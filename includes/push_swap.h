/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:26:46 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/19 15:07:30 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack_element
{
    int data;
    struct s_stack_element *next;
}   t_stack_element;

/* 
* ---Check stack function---
* 1. Calcul la longueur de la stack 
* 2. Reguarde si j'ai un chiffre en double 
* 3. Reguarde si il y a autre chose que des chiffres
* 4. Check de fonction 2 & 3 ensemble
*/
int         stack_size_calculator(int argc, char *argv[]);
int         if_digit_duplicate(char *argv[], int stack_size);
int         if_array_is_digit(char **argv, int stack_size);
int         if_valid_args(char *argv[], int stack_size);

// Error message function
void        error_message();

// Outils function (fonction de ma libft)
void	    ft_putstr_fd(char *s, int fd);
long	    ft_atol(const char *str);
int	        ft_isdigit(int c);

// ft_split function
char	    **ft_split(char const *s, char c);
static char	**ft_array(char const *s, char **dst, char c, int l);
int	        ft_num_of_chars(char const *s2, char c, int i);
int	        ft_num_of_lines(char const *s1, char c);

// free argument function 
void	    free_argv(char *argv[]);

#endif