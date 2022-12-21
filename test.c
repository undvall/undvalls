#include <stdio.h>

int main (void)
{
    int array[] = {5, 100, 3, 22, 55};

    printf("\nCurrent array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }

    return 0;
}