#include<stdio.h>

int main(){

int number1,number2;
scanf("%d %d",&number1,&number2);


    int max = (number1 > number2) ? number1 : number2;
    int lcm = max;

    while (1) {
        if (lcm % number1 == 0 && lcm % number2 == 0) {
            printf("The LCM of %d and %d is %d.\n", number1, number2, lcm);
            break;
        }
        lcm += max;
    }

return 0;
}
