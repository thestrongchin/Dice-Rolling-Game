#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//* variables
int selection = 0;

//* arrays
int player_roll[2];
int computer_roll[2];


int greeting(){
    printf("Welcome to the dice rolling game! \n");
    printf("Please select an option: \n \n");

    printf("1. Play a round");
    printf("2. Show results");
    printf("3. Exit \n");
    
    printf("Please enter your selection: \n");
    scanf("%d", &selection);
}

int rollDice(){
    for(int i = 0; i < 2; i++){
        player_roll[i] = rand() % 6 + 1;

    }

    printf("generated numbers: %d, %d", player_roll[0], player_roll[1]);
}

//! Testing
int main(){
    srand(time(0)); 
    rollDice();

    return 0;
}