#include<stdio.h>
#include <stdbool.h>

int main(){
    int num;

    scanf("%d",&num);

    bool isPrime=true;
    for(int i= 2; i < num; i ++){
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }

    // for (int i = 2; i * i <= num; i ++){
    //     if(num % 2 == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    if(isPrime){
        printf("Prime");
    } else{
    printf("Composite");
    }
return 0;
}

