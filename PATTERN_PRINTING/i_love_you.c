#include <stdio.h>

int main()
{
    printf("\n");
    printf("\n");
    int p, s, r = 1;
    for (p = 1; p <= r; p++)
    {

        for (s = 1; s <= 8 + p; s++)
        {

            printf("*");
        }
        printf("\n");
    }
    int u, v, w = 5;
    for (u = 1; u <= w; u++)
    {

        for (v = 1; v <= 4; v++)
        {

            printf(" ");
        }
        for (v = 1; v <= 1; v++)
        {
            printf("*");
        }
        for (v = 1; v <= 2; v++)
        {

            printf(" ");
        }
        printf("\n");
    }
    for (s = 1; s <= 8 + p; s++)
    {

        printf("*");
    }
    printf("\n");
    printf("\n");

    int a, b = 2, c, q = 0;

    for (a = 1; a <= 1; a++)
    {
        printf(" ");
    }

    for (a = 1; a <= b; a++)
    {
        for (c = 1; c <= 2 * a; c++)
        {

            printf("*");
        }

        for (c = 1; c <= 4 - a - q; c++)
        {

            printf(" ");
        }
        for (c = 1; c <= 2 * a; c++)
        {

            printf("*");
        }
        q += 1;
        printf("\n");
    }
    int m = 5, x, y;

    for (x = 1; x <= m; x++)
    {

        for (y = 1; y <= x - 1; y++)
        {

            printf(" ");
        }
        for (y = m; y >= x; y--)
        {

            printf("*");
        }
        for (y = m - 1; y >= x; y--)
        {
            printf("*");
        }
        printf("\n");
    }

    int i, j, k = 6;
    for (i = 1; i <= k; i++)
    {

        for (j = 1; j <= 1; j++)
        {

            printf("*");
        }
        for (j = 1; j <= 8; j++)
        {

            printf(" ");
        }
        for (j = 1; j <= 1; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    int l, z = 1;
    for (l = 1; l <= k; k++)
    {

        for (l = 1; l <= 10; l++)
        {

            printf("*");
        }
    }

    return 0;
}