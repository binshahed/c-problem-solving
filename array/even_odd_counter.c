#include<stdio.h>

int main(){

    int N,x;
    int arr[200001];
    int i;
    scanf("%d", &N);

    for( i=1; i<=N; i++ ){
        scanf("%d", &x);
        arr[x] =1;
    }

    for (i=1; i<=N; i++){
        if(arr[i]==0){
            printf("the missing number is: %d", i);
        }
    }




return 0;
}
