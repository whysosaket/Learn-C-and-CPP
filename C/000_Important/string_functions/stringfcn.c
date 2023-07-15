#include<stdio.h>
#include<string.h>

char* strlwr (char* s) {
    for (int i = 0; i < strlen(s); ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    return s;
}

int main(){

    char s1[120]= "Saket";
    char s2[]= "Aryan";

    // This strlwr and strupr are not explicit functions and does not come with all the versions of string.h
    // strlwr(s1);         // convert string into lowercase
    // strupr(s1);         // convert string into uppercase
    // strcat(s1,s2);          // concats string 1 and string 2
    // strncat(s1,s2,3);          // concats string 1 and string 2, and the number defines the number of copied characters
    // strcpy(s1,s2);          // copies string 1 into string 2

    // this below one also copies the string into the first fields 
        // strncpy(s1,s2,2);       // copies string 1 into string 2 and the number defines the number of characters

    // not a implicit function
    // strset(s1, '?'); // set all strings to same value
    // strnset(s1, '?', 4); // set all strings to same value

    // again not a implicit function
    // strrev(s1); // reverses the string 

    int len = strlen(s1);

    // Other important functions
    int result;
    // result = strcmp(s1, s2);   // compares string 1 and string 2 and return 0 if both are same and return something else if not same
    // result = strncmp(s1, s2, 1);   // compares string 1 and string 2, but only compares the n characters

    // result = strcmpi(s1, s2);   // this function just ignores the case
    // result = strncmpi(s1, s2,2);   // this function just ignores the case


    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%d\n", len);
    printf("%d\n", result);
     

    return 0;
}