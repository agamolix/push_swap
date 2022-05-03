
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:40:41 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/22 17:41:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

int *init_tab(int tab[][4], t_data *data, int argc, char **argv)
{
    init_tab_AB(tab, argc, argv);
    copyA_to_CD(tab, data);
    sort_C(tab, data);
    return (tab[0]);
}

int *init_tab_AB(int tab[][4], int argc, char **argv)
{
    int i;

    i = 0;
    while (i < argc - 1)
    {
        tab[i][0] = atoi_int(argv[i + 1]);
        tab[i][1] = 0;
        i++;
    }
    return (tab[0]);
}

int *copyA_to_CD(int tab[][4], t_data *data)
{
    int i;

    i = 0;
    while (i <= data->max)
    {
        tab[i][2] = tab[i][0];
        tab[i][3] = tab[i][0];
        i++;
    }
    data->c0 = data->a0;
    return tab[0];
}

int *sort_C(int tab[][4], t_data *data)
{
    int i;
    int temp;

    i = data->c0;
    while (i < data->max)
    {
        if (tab[i][2] > tab[i + 1][2])
        {
            temp = tab[i][2];
            tab[i][2] = tab[i + 1][2];
            tab[i + 1][2] = temp;
            i = data->c0 - 1;
        }
        i++;
    }
    return tab[0];
}

void init_data(t_data *data, int argc)
{
    data->max = argc - 2;
    data->a0 = 0;
    data->b0 =  argc - 1;
    data->counter = 0;
}
