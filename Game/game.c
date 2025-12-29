#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//* variables
int selection = 0;

int playerTotal = 0;
int computerTotal = 0;

int computerWins = 0;
int playerWins = 0;
int ties = 0;

//* arrays
int player_roll[2];
int computer_roll[2];


int greeting(){
    while(1){
        printf("Welcome to the dice rolling game! \n");
        printf("Please select an option: \n \n");

        printf("1. Play a round \n");
        printf("2. Show results \n");
        printf("3. Exit \n");
        
        printf("Please enter your selection: ");
        scanf("%d", &selection);

        if(selection == 1){
            // TODO: Do testing once multi-file system is made
        }

        if(selection == 2){
            // TODO: Do testing once multi-file system is made
        }

        if(selection == 3){
            // TODO: Do testing once multi-file system is made
        }
        else{
            printf("Error! Please try again! \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n ");
        }


    }
}

int rollDice(){

    //* Generate player number
    for(int i = 0; i < 2; i++){
        player_roll[i] = rand() % 6 + 1;
    }

    //* Print player roll
    playerTotal = player_roll[0] + player_roll[1];
    printf("You rolled: %d and %d. Total = %d \n", player_roll[0], player_roll[1], playerTotal);

    //* Generate computer number
    for(int i = 0; i < 2; i++){
        computer_roll[i] = rand() % 6 + 1;
    }

    //* Print computer roll
    computerTotal =  computer_roll[0] + computer_roll[1];
    printf("Computer rolled: %d and %d. Total = %d \n \n", computer_roll[0], computer_roll[1], computerTotal);
    
    //* ifs
    if(playerTotal > computerTotal){
        printf("You won this round! \n");
        playerWins++;
    }

    if(computerTotal > playerTotal){
        printf("The computer won this round! \n");
        computerWins++;
    }

    if(playerTotal == computerTotal){
        printf("It's a tie! \n");
        ties++;
    }

    printf("computer wins: %d \n", computerWins);
    printf("player wins: %d \n", playerWins);
    printf("ties: %d", ties);

    // TODO: in main.c, put srand(time(0)) when calling rollDice();
}

//! Testing
int main(){
    greeting();


    return 0;
}