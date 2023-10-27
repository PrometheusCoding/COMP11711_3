#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    char student_id [11];
    int mark;
};

int main(){
    struct Student new_student = {"Hassan Shafeeq", "201729952", 35};
    printf("%s\n", new_student.name);
    printf("%s\n", new_student.student_id);
    printf("%i\n", new_student.mark);
    return 0;
}