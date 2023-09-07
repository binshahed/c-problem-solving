#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }


    for (int i = 0; i < num; i++)
    {
        printf("%d-",arr[i]);

        for (int j = 0; j < num; j++)
        {
            if (arr[i]!=arr[j])
            {
                printf("%d ",arr[j]);
            }
            
        }
        printf("\n");
    }
    
    

    return 0;
}