#include<stdio.h>


typedef struct{
    char name[25];
    int roll;
    double marks;
} Student;

void printDetails(Student);

int main(){

    Student students[3];

    students[0] = (Student){"Saket", 2, 69.2};
    students[1] = (Student){"Ankit", 7, 77.2};
    students[2] = (Student){"Ankita", 27, 57.2};
    
    // here 37 is the size of the struct
    for(int i=0;i<sizeof(students)/37;i++){
        printDetails(students[i]);
    }

    return 0;
}

void printDetails(Student student){
    printf("Name: %s\nRoll No. %d\nMarks: %lf\n\n",student.name, student.roll, student.marks);
}