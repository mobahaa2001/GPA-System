#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deg1,deg2,deg3,deg4,deg5;
    int sum;

    float avg, prec;

    printf("Hello Student, Welcome in our Application");

    printf("Enter mark for subject 1 out of 100: ");
    scanf("%d", &deg1);

    printf("Enter mark for subject 2 out of 100: ");
    scanf("%d", &deg2);

    printf("Enter mark for subject 3 out of 100: ");
    scanf("%d", &deg3);

    printf("Enter mark for subject 4 out of 100: ");
    scanf("%d", &deg4);

    printf("Enter mark for subject 5 out of 100: ");
    scanf("%d", &deg5);

    sum = deg1+deg2+deg3+deg4+deg5;
    printf("Your summation of all subject is : %d \n", sum);

    avg = sum /5 ;
    printf("Your average is: %0.2f \n", avg);

    prec = (sum * 100) / 500;
    printf("Your precentage = %0.2f \n", prec);


    if(prec >= 95 )
    {
        printf("\n GPA = 4.0");
        printf("\n Grade : A+");
    } else if(prec >=85 && prec <= 94)
        {
        printf("\n GPA = 3.7");
        printf("\n Grade : A");
    }else if(prec >=75 && prec <= 84)
        {
        printf("\n GPA = 3.3");
        printf("\n Grade : B+");
    }else if(prec >=70 && prec <= 74)
        {
        printf("\n GPA = 2.7");
        printf("\n Grade : B-");
    } else if(prec >=65 && prec <= 69)
        {
        printf("\n GPA = 2.3");
        printf("\n Grade : C+");
    } else if(prec >=60 && prec <= 64)
        {
        printf("\n GPA = 2.0");
        printf("\n Grade : C-");
    } else if(prec >=55 && prec <= 59)
        {
        printf("\n GPA = 1.7");
        printf("\n Grade : D+");
    } else if(prec >=50 && prec <= 54)
        {
        printf("\n GPA = 1.3");
        printf("\n Grade : D-");
    } else if(prec >=0 && prec <= 50)
        {
        printf("\n GPA = 0.0");
        printf("\n Grade : F");
    }

    printf("\n Thank you for using our GPA System");
    return 0;
}
