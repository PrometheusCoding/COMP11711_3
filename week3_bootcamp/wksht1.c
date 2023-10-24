#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *open_file(char filename[], char mode[]){
    FILE *file = fopen(filename, mode);
    if (file == NULL){
        printf("The file couldn't be accessed!");
        exit(0);
    }else{
        return file;
    }
}

void q1(){
    int upToN;
    int iter = 0;
    FILE *file;
    printf("How many square numbers do you want: ");
    scanf("%d", &upToN);
    file = open_file("square.dat", "w");
    for(iter=1; iter<=upToN; iter++){
        fprintf(file, "%.1f\n", pow(iter, 2));
        }  
    fclose(file);
}

void q2(){
    FILE *file = open_file("square.dat", "r");
    int numArr[20];
    int iter = 0;
    int i = 0;
    int num;
    while(!feof(file)){
        fscanf(file, "%d", &num);
        numArr[iter] = num;
        iter++;
    }
    for(i=0; i<20; i++){
        printf("%d\n", numArr[i]);
    }
    fclose(file);
}

int main(){
    //q1();
    q2();
    return 0;
}