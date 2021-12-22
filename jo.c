#include <stdio.h>

int main() {

     int number, right_digit;

    printf("Enter a number:  \n" );
    scanf("%i", &number);

    if(number < 0){

        number = number * -1;


        do{
            right_digit = number %10;
            number = number /10;
            printf("%i", right_digit);
        }
        while(number !=0);
        printf("-");
        printf("\n");

    }
    else
        do{
            right_digit = number %10;
            number = number /10;
            printf("%i", right_digit);
        }
        while(number !=0);

    return 0;
}
