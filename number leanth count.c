#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int sum=0;
    int a=0;

    while (n != 0) {
        a=n%10+a;
        n /= 10;

        sum++;
    }
       printf("%d \n", a);

    return 0;

}
