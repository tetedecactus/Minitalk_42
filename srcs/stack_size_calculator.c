/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size_calculator.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:00:11 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/19 10:59:12 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int stack_size_calculator(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc > 2)
        i = argc - 1;
    while (argv[i])
        i++;
    return (i);    
}

int if_digit_duplicate(char *argv[], int stack_size)
{
    int i;
    int j;
    int stack_array;

    i = 0;
    while(i < stack_size)
    {
        j = i + 1;
        stack_array = ft_atol(argv[i]);
        while (j < stack_size)
        {
            if(stack_array == ft_atol(argv[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int if_array_is_digit(char **argv, int stack_size)
{
    int i;
    int j;

    i = 0;
    while (i < stack_size)
    {
        j = 0;
        while (argv[i][j])
        { 
            if (!ft_isdigit(argv[i][j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int if_valid_args(char *argv[], int stack_size)
{
    if (if_digit_duplicate(argv, stack_size) || if_array_is_digit(argv, stack_size))
        error_message();
    return (0);
}