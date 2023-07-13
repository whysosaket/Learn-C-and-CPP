#include<stdio.h>

int main(){

    // here it is optional to set a max number of rows but it is necessay to set max number of cols
    int numbers[3][5] = {
                        {1,2,3,7,3},
                        {3,4,5,6,7},
                        {1,2,3,}
                        };

    // iterating through arrays
    int olen = sizeof(numbers)/sizeof(numbers[0]);
    for(int i=0;i<olen;i++){
        int ilen = sizeof(numbers[i])/sizeof(numbers[i][0]);
        for(int j=0;j<ilen;j++){
            printf(" - %d - ", numbers[i][j]);
        }
        printf("\n");
    }
        

    return 0;
}