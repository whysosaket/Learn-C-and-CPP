#include<stdio.h>

int main(){

    FILE *pF = fopen("./text.txt", "r");
    if(pF==NULL){
        printf("File Not Found!");
        return 0;
    }

    char buffer[255];

    while(fgets(buffer, 255, pF)!=NULL){
        printf("%s", buffer);
    }
    fclose(pF);

    return 0;
}