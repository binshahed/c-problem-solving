#include<stdio.h>

int main()
{
    int n,h,i,x;

    scanf("%d %d", &n, &h);

    int w=0;
    for(i=1; i<=n;i++){
        scanf("%d",&x);
        if(x>h){
            w=w+2;
        } else{
        w++;
        }
    }
    printf("%d", w);

    return 0;
}
