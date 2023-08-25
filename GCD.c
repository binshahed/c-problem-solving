#include<stdio.h>

int main(){
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    int ged=1;
    for(int i=1; i<=number1; i++){
        if(number1%i==0 && number2%i==0){
            ged=i;
        }
    }
    printf("The GCD of %d and %d is %d.", number1, number2, ged);

return 0;
}
