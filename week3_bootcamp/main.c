#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename[30];
    char userInp[100];
    FILE *file;
    printf("Enter a filename to write to: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file==NULL){
        printf("The file doesn't exist!");
    }else{
        printf("What would you like to the file?: ");
        scanf("%s", userInp);
        fprintf(file, "%s", userInp);
    }
    fclose(file);
    return 0;
}