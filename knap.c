#include <conio.h>
#include <stdio.h>

void main()
{
    float profit[10], weight[10], capacity, total_value = 0;
    int i, n, j;
    float ratio[10], temp;

    clrscr();
    printf("Enter the number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the weight and profit for item %d: ", i);
        scanf("%f %f", &weight[i], &profit[i]);
    }

    printf("Enter the capacity of the knapsack: ");
    scanf("%f", &capacity);

    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                // Swap ratios
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                // Swap weights
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                // Swap profits
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    printf("Knapsack problem using greedy method:\n");

    for (i = 0; i < n; i++)
    {
        if (weight[i] > capacity)
        {
            break;
        }
        else
        {
            total_value += profit[i];
            capacity -= weight[i];
        }
    }

    if (i < n)
    {
        total_value += ratio[i] * capacity;
    }

    printf("\nThe maximum value is: %f\n", total_value);

    getch();
}
