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
    scanf("Value1: %i ", &a);
    scanf("Value2: %i", &b);
    buffer = a; 
    a = b;
    b = buffer;
}

int main()
{
    // q1();
    // q2();
    // q3();
    //q4();
    q5();
    return 0;
}