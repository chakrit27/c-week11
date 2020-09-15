/*c-if else Lander*/
#include<stdio.h>
void student3(){
    int number1,number2;
    printf("Student3\n");
    printf("Enter two integer: ");
    scanf("%d%d", &number1,&number2);
    //check if two integers are equal
    if(number1==number2){
        printf("Result: %d=%d",number1,number2);
    }
    //check if number1 is greater than number2
    else if(number1>number2){
        printf("Result: %d>%d",number1,number2);
    }
    //check if both test expression sre false
    else{
        printf("Result: %d<%d",number1,number2);
    }
    return 0;
}
