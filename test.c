#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int array[] = {5, 100, 3, 22, 55};

    printf("\nCurrent array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }

    // Gör en ändring: Lägger till en array2.

    int array2[] = {1010101, 1, 0, 1101};
    int i = 0;
    printf("\nArray2: ");
    while (i < 4)
    {
        printf("%d, ", array2[i]);
        i++;
    }    

    return 0;
}