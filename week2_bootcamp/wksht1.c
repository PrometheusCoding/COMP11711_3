#include <stdio.h>
#include <stdlib.h>

void q1(){
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    if(num>0){
        printf("The number %d is positive\n", num);
    }else if(num<0){
        printf("The number %d is negative\n", num);
    }else{
        printf("The number is 0\n");
    }
}

void q2(){
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    if ((num%4==0)&&(num%5==00)){
        printf("The number %d is divisible by 4 and 5\n", num);
    }else{
        printf("The number %d is not divisible by 4 and 5\n", num);
    }
}

void q3(){
    int mark;
    printf("Enter the mark: ");
    scanf("%i", &mark);
    printf("%d", mark);
    if(mark<50){
        printf("The student has failed\n");
    }else if(50<=mark<69){
        printf("The student has passed\n");
    }else{
        printf("The student has passed with a distinction\n");
    }
}

int main(){
    //q1();
    //q2();
    q3();
    return 0;
}