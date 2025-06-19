#include <stdio.h>
#include <math.h>
#include "menger.h"

/**
 * is_hole - Check if the cell (x, y) is in a hole
 * @x: x coordinate
 * @y: y coordinate
 *
 * Return: 1 if it's a hole, 0 otherwise
 */
int is_hole(int x, int y)
{
    while (x > 0 || y > 0)
    {
        if (x % 3 == 1 && y % 3 == 1)
            return (1);
        x /= 3;
        y /= 3;
    }
    return (0);
}

/**
 * menger - Draw a 2D Menger sponge
 * @level: the level of the Menger sponge
 */
void menger(int level)
{
    int size, i, j;

    if (level < 0)
        return;

    size = pow(3, level);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (is_hole(i, j))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
