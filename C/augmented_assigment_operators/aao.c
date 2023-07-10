#include<stdio.h>

int main(){

    /*
        Augmented Assigment Operator -> Used to replace a statment where an operator 
                                        takes a variable as one of its argument

                                        for example x = x+10;
                                                    x+=10;
    */

   int x = 5;
   x+=10;

   printf("%d\n",x);

    return 0;
}