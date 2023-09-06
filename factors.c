#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);
    int dibider=num;

    while(dibider>=1){

        if(num%dibider==0){
            printf("%d,", dibider);
        }


        dibider=dibider-1;
    }

return 0;
}
