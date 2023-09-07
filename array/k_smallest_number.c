#include <stdio.h>

int main()
{
    int num,k;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("\n enter K value: ");
scanf("%d", &k);
    int sowaf;
    for (int i = 0; i < num-1; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                sowaf = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sowaf;
            }
        }
    }



   
   
        printf("\n %d ",arr[k-1]);
   

    return 0;
}