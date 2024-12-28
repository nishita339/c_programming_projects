//Number Guessing Game

#include<stdio.h>    // Standard input-output header file
#include<stdlib.h>   // For rand(), srand(), and other utility functions
#include<time.h>      // For time() function to seed the random number generator

int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));    //random number generator with the current time

    printf("welcome to the world of guessing numbers \n");
    random=rand() % 100 + 1;   //Generate a random number between 1 and 100

    do
    {
        printf("Please enter your Guess between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;
         
        if (guess < 1 || guess > 100)
        {
            printf("Invalid input! Please guess a number between 1 and 100.\n");
            continue;
        }else if (guess < random)
        {
            printf("Guess a large number. \n");
        }else if (guess > random)
        {
            printf("Guess a small number. \n");
        }else{
            printf("Congratulations !!! You have successfully guessed the Number in %d attemts", no_of_guess);
        }
        
        
    } while (guess != random);

    printf("\n Thank you for playing! We hope you enjoyed the game.");
    printf("\nSee you next time! Goodbye!\n");
    
    return 0;
}