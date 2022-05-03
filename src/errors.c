/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:40:41 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/22 17:41:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_error_double(int tab[][4], t_data *data)
{
    int i;

    i = 1;
    while (i <= data->max)
    {
        if (tab[i][2] == tab[i - 1][2])
        {
            write(0, "ERROR\n", 6);
            return(1);
        }
        i++;
    }
    return (0);
}

int check_error_atoi(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i < argc)
    {
        if (!is_atoi_int(argv[i]))
        {
            write(0, "ERROR\n", 6);
            return(1);
        }
        i++;
    }
    return 0;
} 
