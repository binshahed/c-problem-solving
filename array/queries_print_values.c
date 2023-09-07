#include <stdio.h>

int main()
{

    int num, quer;
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter queries: ");
    scanf("%d", &quer);

    
    

    for (int i = 0; i < quer; i++)
    {
        int pos, increse;
        scanf("%d %d", &pos, &increse);
        arr[pos]=arr[pos]+increse;
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}