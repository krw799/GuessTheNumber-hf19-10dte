#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n = (rand() % 100)+1;
    int counter = 0;

    char w = 0;

    do
    {
        printf("Podaj liczbe: ");
        int l;
	counter++;
        scanf("%d", &l);
        
        if (l > n)
        {
            printf("Za duzo!\n");
        }
        else if (l < n)
        {
            printf("Za malo!\n");
        }
        else
        {
            printf("Wygrales w %d-tym podejciu!\n",counter);
            w = 1;
        }

    }
    while (w == 0);
}
