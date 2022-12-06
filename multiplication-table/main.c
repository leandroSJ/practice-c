#include <stdio.h>

int main(){
    int numberOne, numberTwo, i,j;

    numberOne = 1;
    while (numberOne <=10){
        numberTwo=1;
        while (numberTwo <=10){
            printf("%2d * %2d = %2d\n", numberOne,  numberTwo, numberOne*numberTwo);
            numberTwo +=1;
        }
        numberOne +=1;
        putchar('\n');
    }

    // same result using for loop
    printf("\n\nSame result using for loop\n\n\n");

    for (i=1 ; i<=10 ; i=i+1){

        for (j=1 ; j<=10 ; j=j+1)
            printf("%2d * %2d = %2d\n", i, j, i*j);

        if (i !=10){
            printf("Press <ENTER> for continue");
            getchar();
        }
    }
}
