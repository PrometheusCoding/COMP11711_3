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
    FILE *csvPtr; // Stores the pointer for the CSV file
    char filename[100];  // Stores the name of the CSV file
    int noOfdatapoints = 0;
    char dataArr[100][25]; // Stores all the data from the file 
    char dateArr[100][25]; // Stores the dates from the file in order of accessing from the CSV
    char timeArr[100][25]; // Stores the times from the file in order of accessing from the CSV
    char stepsArr[100][25]; // Storest the steps from the file in order of accessing from the CSV
    int iter = 0; // General variable which is used to loop through certain arrays
    printf("Enter the filename that you would like to check (Remember to include the .csv): ");
    scanf("%s", filename);
    csvPtr = fopen(filename, "r");
    if (csvPtr == NULL){ // Checks to see that the file exists
        printf("The file did not open\n");
    }else{

        while(fgets(dataArr[noOfdatapoints], 100, csvPtr)){ // Loops through the file and stores the data in dataArr until there is no more data to get
            noOfdatapoints ++;
            }

        while (iter<noOfdatapoints){ // Goes through the dataArr and using the tokeniseRecord function splits the data into date,time,steps arrays
            tokeniseRecord(dataArr[iter], ",", dateArr[iter], timeArr[iter], stepsArr[iter]);
            iter++;
            }

        printf("Number of records in file: %d\n", noOfdatapoints);

        iter = 0;
        while (iter<3){ // Prints the first three records in "%s/%s/%s" format.
            printf("%s/%s/%s", dateArr[iter], timeArr[iter], stepsArr[iter]);
            iter++;
            }
    fclose(csvPtr); // Closes the file
    }


}