/*
Author: Leandro SJ
Data: 2022/12/05
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOne, numberTwo, numberTemp;

    printf("****\t Sort number by ascending by Leandro SJ ****\n\n");

    printf("introduce 2 numbers: ");
    scanf("%d %d", &numberOne, &numberTwo);
        if (numberOne > numberTwo){
            numberTemp = numberOne;
            numberOne = numberTwo;
            numberTwo = numberTemp;
        }

    printf("\n\nNumbers sort by ascending: [%d] and [%d]\n\n", numberOne, numberTwo);
}
