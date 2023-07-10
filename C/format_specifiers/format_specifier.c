#include<stdio.h>

int main(){
    
    // A format specifier(%) can be used to define and format the type of data

    /*
        %c = character
        %s = string (array of characters)
        %f = float
        %lf = double 
        %d =  integer

        %.1f = decimial precision
        %1 = minimal field width
        %-  = left align
    */

   float item1 = 4.85;
   float item2 = 4.00;
   float item3 = 4.99;

    printf("%.2f , %f , %.3f \n", item1, item2, item3);

    // Now we can use the minimum field width and then we can display leaving space

    printf("PRICE: $%10.2f\n", item1);
    printf("PRICE: $%10.4f\n", item2);
    printf("PRICE: $%10.3f\n", item3);

    // Now if we wish that this should be left aligned then we need to add the - sign too

    printf("PRICE: $%-10.2f\n", item1);
    printf("PRICE: $%-10.4f\n", item2);
    printf("PRICE: $%-10.3f\n", item3);


    return 0;
}