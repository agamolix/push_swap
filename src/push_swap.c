/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:40:41 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/22 17:41:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
    int tab[argc - 1][4];
    t_data data;
    int rank;

    init_data(&data, argc);
    if (check_error_atoi(argc, argv) == 1)
        return 0;       
    init_tab(tab, &data, argc, argv);
    if (check_error_double(tab, &data) == 1)
        return 0;       
    convert_to_rank(tab, &data);
    if (is_sorted(tab, &data))
        return 0;
    if (data.max <= 5)
        case_max6(tab, &data);
    else
    {
        rank = 0;
        while (!is_sorted(tab, &data))
        {
            radix(tab, &data, rank);
            rank++;
        }
    }
   return 0;
}