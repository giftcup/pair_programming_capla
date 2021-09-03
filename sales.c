/* Determines how many pairs of socks with matching colors */

#include <stdio.h>

int main(void)
{
   int num_of_socks;
   int color;

    printf("Enter number of socks in pile: ");
    scanf("%d", &num_of_socks);

    int colors[num_of_socks];
    int color_tracker[num_of_socks];

    for (int i = 0; i < num_of_socks; i++)
    {
        color_tracker[i] = 0;
        colors[i] = 0;
    }
    
    printf("Enter colors for each sock: ");
    for (int i = 0; i < num_of_socks; i++)
    {
        scanf("%d", &color);
        for (int j = 0; j <= i; j++)
        {
            if (color != colors[j])
                colors[j] = color;
            else
                color_tracker[j] += 1;
        }
    }

    for (int i = 0; i < num_of_socks; i++)
    {
        printf("%d %d ", colors[i], color_tracker[i]);
    }
    printf("\n");

    return 0;
}