#include <stdio.h>

int main (void)
{
    // Lägger till en kommentar för att skapa en konflikt.
    // Nu blir det kaos!?!?!?!?
    int array[] = {5, 100, 3, 22, 55};

    printf("\nCurrent array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }

    // Gör en ändring: Lägger till en array2.

    int array2[] = {1010101, 1, 0};
    int i = 0;
    printf("\nNew array: ");
    while (i < 3)
    {
        printf("%d, ", array2[i]);
        i++;
    }
    
    // Lägger till en kommentar efter att ha editerat i browsern och UTAN att göra en PULL!!
    return 0;
}
