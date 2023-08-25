#include<stdio.h>

int main(){

int num;

scanf("%d", &num);

int lastnum =num;
 while(lastnum>1){
    if(lastnum % 2 ){
        lastnum= lastnum-1;
        printf("%d, ", lastnum);
    }
    lastnum= lastnum/2;
    printf("%d, ", lastnum);
 }

 return 0;

}
