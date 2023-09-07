#include<stdio.h>

int main(){
    int num,f=0,s=1,i,preb=1;
    scanf("%d",&num);

    printf("%d %d ", f,s);

    for ( i = 1; i <=num-2; i++)
    {
        preb= f+s;
        printf("%d ", preb);
        f=s;
        s=preb;
    }
    


    return 0;
}