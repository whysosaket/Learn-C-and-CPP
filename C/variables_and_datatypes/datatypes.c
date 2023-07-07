#include<stdio.h>
#include<stdbool.h>

int main(){    
    int age = 21;
    float sgpa = 6.9;
    char grade = 'D';
    char name []= "Saket Aryan";

    printf("Name: %s \nAge: %d \nGrade: %c \nSGPA: %f\n\n",name,age,grade,sgpa);

    // the list of all the data types in C
    char a = 'C';               // single character %c
    char b[] = "Saket";         // array of characters %s

    float c = 3.141516161515149;           // 4 bytes, and (32 bits of precision) 6-7 digits %f
    double d = 3.141516161515149; // 8 bytes, and 64 bits of precision, and has 15-16 digits %lf

    bool e = true;              // 1 byte, (true or false) %d
    // booleans in C work in binary one represents true and zero represents false

    char f = 100;               // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;      // 1 byte 0 to 255, %d or %c

    short int h = 32767;        // 2 bytes (-32768 to +32767) %d
    unsigned short int i = 65535;    // 2 bytes (0 to 65535) %d
    // instead of short int we can also declare short h = 123;
    // this is also similar

    int j = 2147483647;         // 4 bytes, (from -2147483648 to +2147483647) %d
    unsigned int k = 4294967295L; // 4 bytes, (0 to 4294967295) %u
    // instead of standard int j = 12312;
    // we can also use long int j = 12312;
    // this is also same as in C, int are already considered as long type

    long long int l = 9223372036854775807;     // 8 bytes (-9 quintillion to +9 quintillion)    %lld
    unsigned long long int m = 18446744079551615U;     // 8 bytes (0 to 18 quantillion)         %llu
    // similar to short declaration we can simply decalre these as \,
    // long long l = 12319283911823;
    // a practical use case for long long int could be something like dealing with the speed of light


    // PRINTING THESE NUMBERS
    printf("%.15f\n", c);
    printf("%.15lf\n", d);   // by default it only displays 5 digits
    // from the above example we can see that, the precision of double is wayyy more

    printf("%d\n", f);      // This will display the char as a number
    printf("%c\n", f);      // this will display the char as a char (using the ascii table)


    // we can also specify the signed keyword before a declaration that is also fine but it has no effect
    // that will similar to not writing it this means that
    // signed int a = 5; is same as int a = 5;


    // overflow of datatype work similar to java


    return 0;
}