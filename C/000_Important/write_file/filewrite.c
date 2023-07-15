#include<stdio.h>

typedef char String[100];

void write(String, String);
void append(String, String);
void delete(String);

int main(){

    // write("new.txt","Writing through a function");
    // append("new.txt","\nAppending through a function");
    delete("help.txt");

    return 0;
}

void write(String filename, String text){
    FILE *pF = fopen(filename, "w");
    fprintf(pF, "%s", text); 
    printf("Writing Successful!\n");
    fclose(pF);
}

void append(String filename, String text){
    FILE *pF = fopen(filename, "a");
    fprintf(pF, "%s", text); 
    printf("Appending Successful!\n");
    fclose(pF);
}

void delete(String filename){
    if(remove(filename)==0){
        printf("File Deletion Success!\n");
    }else{
        printf("File Not Found.\n");
    }
}