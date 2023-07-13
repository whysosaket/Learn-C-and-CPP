#include<stdio.h>

int main(){

    double prices[] = {12.1,11.22,89.11,9.8,6.69};
    
    int len = sizeof(prices)/sizeof(prices[0]);
    // we do the above line because, the size of a give the size of array in bytes and then we,
    // divide that number with size of element, or the data type to get the exact number of elements
    
    for(int i=0;i<len;i++){
        printf("$%.2lf\n",prices[i]);
    }

    return 0;
}