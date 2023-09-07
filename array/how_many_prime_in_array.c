#include <stdio.h>
#include <stdbool.h>

int main()
{

    int num, primeCount = 0;
    scanf("%d", &num);

    int arr[num], primearr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primeCount++;
            primearr[primeCount] = arr[i];
        }
        
    }

    for (int i = 1; i <=primeCount; i++)
    {
        printf("%d ", primearr[i]);
    }
    

    return 0;
}