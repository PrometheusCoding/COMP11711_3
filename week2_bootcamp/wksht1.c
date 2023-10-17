#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    printf("%d\n", mark);
    if(mark<50){
        printf("The student has failed\n");
    }else if((50<=mark) && (mark<69)){
        printf("The student has passed\n");
    }else{
        printf("The student has passed with a distinction\n");
    }
}

void q4(){
    int temperature;
    printf("Enter the temperature: ");
    scanf("%i", &temperature);
    if((temperature >= -10) && (temperature <= 40)){
        printf("Within range\n");
    }else{
        printf("Not within range\n");
    }
}

void q5(){
    int choice;
    printf("1. Option 1\n2. Option 2\n3. Option 3\n4. Option 4\n5. Option 5\n>");
    scanf("%i", &choice);
    switch(choice){
        case 1: printf("Option 1 has been chosen\n");break;
        case 2: printf("Option 2 has been chosen\n");break;
        case 3: printf("Option 3 has been chosen\n");break;
        case 4: printf("Option 4 has been chosen\n");break;
        case 5: printf("Option 5 has been chosen\n");break;
        default: printf("Not a valid option\n");
    }
}

void q6(){
    int number;
    bool shouldILoop = true;
    while (shouldILoop == true){
        printf("Enter a number between 0-100 and to end this loop enter -1: ");
        scanf("%d", &number);
        if (number == -1){
            shouldILoop = false;
            break;
        }else if((number >= 0) && (number <= 100)){
            printf("The number is within the range\n");
        }else{
            printf("The number is not within the range\n");
        }
    }
}

int main(){
    //q1();
    //q2();
    //q3();
    //q4();
    //q5();
    q6();
    return 0;
}