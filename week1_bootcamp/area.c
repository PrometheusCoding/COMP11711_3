#include <stdio.h> 

int main()
{
    float length;
    float width;
    printf("What is the length of the rectangle?: ");
    scanf("%f", &length);
    printf("What is the width of the rectangle?: ");
    scanf("%f", &width);
    float area = length*width;
    printf("%f\n", area);
    return 0;
}