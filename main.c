/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <salbregh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/21 18:37:24 by salbregh      #+#    #+#                 */
/*   Updated: 2020/06/21 18:45:38 by salbregh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(void)
{
    int     linereturn;
    char    *line;
    int     i;
    int     fd;

    fd = open(0, O_RDONLY);
    // its not your responsibility to free line but try to prevent leaks tho
    linereturn = 1;
    i = 1;
    line = NULL;
    while (linereturn == 1)
    {
        linereturn = get_next_line(fd, &line);
        printf("%i - TIME IN FUNCTION\nLINE:\n%s\n", i, line);
    }
}