#include <stdio.h>
#include <stdlib.h>

int main(){

    char maritalStatus;
    printf("***\t Matital Status ***\n\n");

    printf("M/C \t- \tfor married or Casado(a)\n");
    printf("S \t- \tfor single or solteiro(a)\n");
    printf("D \t- \tfor divorced or divorciado(a)\n");
    printf("W/V \t- \tfor widower or viuvo(a)\n\n");

    printf("What is your matital status? ");
    scanf(" %c", &maritalStatus);

    switch(maritalStatus){
        case 'm':
        case 'M':
        case 'c':
        case 'C': printf("\nMarriage is a divine blessing | O casamento é uma benção divina.\n");
                break;
        case 's':
        case 'S': printf("\nyou are a lonely person | você é uma pessoa sozinha\n");
                break;
        case 'd':
        case 'D':
        case 'w':
        case 'W':
         printf("\nit is never late to restart | nunca é tarde para recomeçar\n");
                break;
    }
}

