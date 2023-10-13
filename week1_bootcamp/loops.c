#include <stdio.h>
#include <stdlib.h>

void whileLoops()
{
    int i = 0;
    while(i<10){
        printf("%d\n", i);
        i++;
    }
}

void forLoops(){
    int i=0;
    for(i=0; i<5; i++)
    {
        printf("%d\n", i);
    }
}

void popList(){
    int a[10]; // initialist a list of size 10 [0,1,2,3,4,5,6,7,8,9] (numbers in the square brackets rep the position of the element.)
    int count;

    for(count = 0; count<10; count++)
    {
        a[count] = count * 10 + count;
        printf("%d\n", a[count]);
    }
    printf("The first and second elements are %d and %d\n", a[0], a[1]);
}

void reverseHello(){
    char greeting[5] = "Hello";
    int i=0;
    char reversedString[5];
    for(i=0; i<5; i++){
        reversedString[i] = greeting[5-i-1];
    }
    printf("%s\n",reversedString);
}

void sumIntInArr(){
    int arr[5] = {12,234,45,23,435};
    int i=0;
    int sum = 0;
    for(i=0; i<5; i++){
        sum = sum + arr[i];
    }
    printf("%d\n", sum);
}

void findMaxInt(){
    int arr[10] = {2, 34, 23, 5463, 213, 123, 6456, 1232 , 56, 2343};
    int i =0;
    int max=0;
    for(i=0; i<10; i++){
        if (max < arr[i])
            {
                max = arr[i];
            }
    }
    printf("%i\n", max);
}

void shift(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int i =0;
    int temp;
    for(i=0;i<10; i++){
        if(i==0){
            temp = arr[i+1];
            arr[i+1] = arr[i];
        }
        else if(1<=i<=8){
            
        }
    
    }
}

int main(){
    //forLoops()
    //whileLoops();
    //popList();
    //reverseHello();
    // sumIntInArr();
    // findMaxInt();
    return 0;
}