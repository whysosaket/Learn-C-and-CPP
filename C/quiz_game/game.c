#include<stdio.h>
#include<ctype.h>

int main(){

    char questions[][100] = {"1. Which is faster C or Java?: ",
                           "2. Which has the concept of class C or C++?: ", 
                           "3. Would you prefer python or C for Machine Learning?: "
                           };

    char options[][100] = {"A. C", "B. Java",
                         "A. C++", "B. C",
                         "A. Python", "B. C"   
                        };

    char answers[3] = {'A','A','A'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    for(int i=0;i<numberOfQuestions;i++){
        printf("%s\n", questions[i]);
        for(int j=i*2;j<i*2+2;j++){
            printf("%s\n", options[j]);
        }
        scanf(" %c", &guess);
        // to clear input buffer we can even use 
        // scanf("%c");
        if(guess==answers[i]) {
            printf("\nCorrect Answer!\n");
            score++;
        } else {
            printf("\nWrong Answer!\n");
        }
        printf("\nYour final score is %d.\n", score);
    }




    return 0;
}