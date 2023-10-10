#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void q1()
{
    printf("Hello world!\n");
}

void q2()
{
    int int1;
    int int2;
    printf("Number 1: ");
    scanf("%i", &int1);
    printf("Number 2: ");
    scanf("%i", &int2);
    int sum = int1 + int2;
    printf("%i\n", sum);
}

void q3()
{
    printf("Size of an int is %li\n", sizeof(int));
    printf("Size of a char is %li\n", sizeof(char));
    printf("Size of a double is %li\n", sizeof(double));
    printf("Size of a float is %li\n", sizeof(float));
}

void q4()
{
    double rad;
    printf("What is the radius of the circle?: ");
    scanf("%lf", &rad);
    printf("The area of the circle is %lf", (M_PI*pow(rad,2)));

}

void q5()
{
    int a;
    int b;
    int buffer;
    printf("Enter value 1: ");
    scanf("%i", &a);
    printf("Enter value 2: ");
    scanf("%i", &b);

    buffer = a; 
    a = b;
    b = buffer;
}

void q6()
{
    int number, result;
    printf("Enter a value: ");
    scanf("%i", &number);
    result = number % 2;
    if (result == 0){
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

int q8(int number)
{
    if (number >= 1){
    return(number*q8(number-1));
    } else {
        return 1;
    }

}

int main()
{
    // q1();
    // q2();
    // q3();
    // q4();
    // q5();
    // q6();
    // printf("%i\n", q8(15));
    return 0;
}