#include<stdio.h>

// pass by value
void changeValue1(int nb){
    nb = 54321;
}

// pass by address
void changeValue2(int *nb){
    *nb = 54321;
}

int main(){
 
    int nb = 12345;
    // passing a value by reference
    changeValue2(&nb);

    // passing a value by value
    // changeValue1(nb); 
    printf("%d\n",nb);

    return 0;
}