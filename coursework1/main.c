#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}




// Complete the main function
int main() {
    FILE *csvPtr;
    char datapoint[100];
    int noOfdatapoints = 0;
    char dataArr[100][25];
    char dateArr[100][25];
    char timeArr[100][25];
    char stepsArr[100][25];
    int i = 0;
    csvPtr = fopen("FitnessData_2023.csv", "r");
    if (csvPtr == NULL){
        printf("The file did not open");
    }else{
        while(fgets(dataArr[noOfdatapoints], 100, csvPtr)){
            //printf("%s\n", dataArr[noOfdatapoints]);
            //printf("%s", dataArr[noOfdatapoints]);
            noOfdatapoints ++;
        }
    while (i<noOfdatapoints){
        tokeniseRecord(dataArr[i], ",", dateArr[i], timeArr[i], stepsArr[i]);
        // printf("Date: %s ", dateArr[i]);
        // printf("time: %s ", timeArr[i]);
        // printf("steps: %s \n", stepsArr[i]);
        i++;
    }
    printf("Number of records in file: %d\n", noOfdatapoints);
    }
    fclose(csvPtr);
    i = 0;
    while (i<3){
        printf("%s/%s/%s", dateArr[i], timeArr[i], stepsArr[i]);
        i++;
    }


}