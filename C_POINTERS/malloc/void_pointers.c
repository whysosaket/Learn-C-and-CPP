#include<stdio.h>

void printData(void *data, char DataTyep);

int main(){

    // void is a generic pointer
    // void pointer means that we will let you know
    int i = 45;
    // char c = '*';
    // double d = 12.67;
    printData(&i, 'i');
    printData(&i, 'c');
    printData(&i, 'd');

    return 0;
}

void printData(void *data, char DataType){
    switch (DataType)
    {
    case 'i':
        printf("%d\n", *(int *)data);
        break;
    case 'd':
        printf("%lf\n", *(double *)data);
        break;
    case 'c':
        printf("%c\n", *(char *)data);
        break;
    
    default:
        printf("Unknown Data Type\n");
        break;
    }
}