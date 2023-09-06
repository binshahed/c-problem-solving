#include<stdio.h>

int main(){
int number1, number2;
printf("Enter the first number:");
scanf("%d",&number1);
printf("Enter the second number:");
scanf("%d",&number2);

if(number1%number2==0){
        printf("The first number is divisible by the second number. ");

} else if (number2%number1==0){
        printf("The second number is divisible by the first number. ");
}else{
    printf("None of them are divisible by the other. ");
}


return 0;

}
