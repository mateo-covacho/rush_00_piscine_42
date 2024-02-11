/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:32:19 by macovach          #+#    #+#             */
/*   Updated: 2024/02/11 02:32:19 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int wide, int tall)
{

    void *ft_putchar();

    // Imprimir primera fila
    for (int i = 0; i <= wide - 1; i++)
    {
        if (i == 0)
        {
            ft_putchar('/');
        }
        else if (i == wide - 1)
        {
            ft_putchar('\\');
        }
        else if (i > 0 && i < wide - 1)
        {
            ft_putchar('*');
        }
    }
    ft_putchar('\n');

    for (int j = 0; j <= tall - 3; j++)
    {
        // Imprimir body
        for (int i = 0; i <= wide - 1; i++)
        {
            if (i == 0)
            {
                ft_putchar('*');
            }
            else if (i == wide - 1)
            {
                ft_putchar('*');
            }
            else if (i > 0 && i < wide - 1)
            {
                ft_putchar(' ');
            }
        }
        ft_putchar('\n');
    }

    if (tall > 1)
    {

        for (int i = 0; i <= wide - 1; i++)
        {
            if (i == 0)
            {
                ft_putchar('\\');
            }
            else if (i == wide - 1)
            {
                ft_putchar('/');
            }
            else if (i > 0 && i < wide - 1)
            {
                ft_putchar('*');
            }
        }
    }
}
