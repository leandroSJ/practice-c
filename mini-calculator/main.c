#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOne, numberTwo, result=0;
    char option;
printf("**** \tCalculator ****\n\n");
    scanf("%d %c %d", &numberOne, &option, &numberTwo);

    switch(option){
        case '+': result = numberOne + numberTwo;
                break;
        case '-': result = numberOne - numberTwo;
                break;
        case '*': result = numberOne * numberTwo;
                break;
        case '\\':
        case '/': result = numberOne / numberTwo;
                break;
    }
    printf("%d %c %d = %d\n\n", numberOne, option, numberTwo, result);
}
