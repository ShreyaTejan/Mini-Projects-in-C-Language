//Guess the number game between 1 to 100
// Code to generate random number between 1 to 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNum = (rand() % 100) + 1; //random integer between 1 to 100
    int numGuesses = 0;
    int guess ;

    do{
        printf("Guess the number:");
        scanf("%d", &guess);
        // numGuesses++;

        if(guess < randomNum) {
            printf("Number is greater than" , guess);
        }
        else if(guess > randomNum){
            printf("Number is lesser than", guess);
        }
        numGuesses++;
    }
    while(guess != randomNum); 
    
    printf("Yay!! You guessed the number in %d guesses", numGuesses);
    
    return 0;
}