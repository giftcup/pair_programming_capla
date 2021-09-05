/* Determines how many pairs of socks with matching colors */

#include <stdio.h>

int main(void)
{
   int num_of_socks;
   int color;
   int pairs = 0;

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
            if (colors[j] != color)
            {
                if (colors[j] == 0)
                {
                    colors[j] = color;
                    color_tracker[j] = 1;
                    break;
                }
            }
            else
            {
                color_tracker[j] += 1;
                break;
            }
        }
    }

    //Calculating the number of pairs
    for (int i = 0; i < num_of_socks; i++)
    {
        pairs += color_tracker[i] / 2;
    }
    printf("%d\n", pairs);

    return 0;
}