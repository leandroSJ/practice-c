#include <stdio.h>

int main(void){

    float salary;
    printf("What is your salary: ");
    scanf("%f", &salary);
    if (salary <=0)
        printf("invalid value!\n\n");
    else
        if (salary >1200)
            printf("The tax rate is: $ %.2f\n\n", salary*0.10);
        else
            printf("The tax rate is: $ %.2f\n\n", salary*0.05);
}
