#include<stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 99
    int randomNumber = rand() % 100;
    int no_of_guesses=0;
    int gussed;

    //printf("Random number: %d\n", randomNumber);
    do{
    printf("Guess the number:");
    scanf("%d",&gussed);
    if(gussed>randomNumber)
    {
        printf("Lower no. plz!!!!\n");
    }
    else if(gussed<randomNumber)
    {
        printf("Higher no.plz!!!!\n");
    }
    else
    {
        printf("Congrats!!!!!!!!!!!!!!!!!\n");
    }
    no_of_guesses++;
    }
    while(gussed!=randomNumber);
    printf("You gussed the no. is %d",no_of_guesses);
    
    return 0;
}
