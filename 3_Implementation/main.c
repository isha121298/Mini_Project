#include<stdio.h>
#include<stdlib.h>
#include"operations.h"
#include"functions.h"
int main()
{
    displaymenu();   /// display the menus for the game
    char name[30];
    char option[3];
    scanf("%s",&option);  /// Scanning the option according to the display menu

    if(option=="S")  /// If 'S' is selected then start the game
    {
        printf("Enter Name");
        gets(name);
        displayrules();  /// display the rules for the game and ask to continue or quit
        if(getchar()=='Y')   /// If 'Y' then start the practice game
        {
            startpracticegame(); ///running the practice game
            displayoption();  /// Choose to continue or to quit
            if(getchar()=='C') /// Continue if 'C' is choosen
            {
                startgame(); /// running the main game and printing the score after each question.
            }
            else{displaymenu();}
        }
        else if(getchar()=='N') ///if 'N' is choosen then it goes back to the display menu
        {
            displaymenu(); ///Displaying the menu
        }
        else
        {
            printf("\n Invalid Press!");  /// If any wrong option is given it will show Invalid Press
        }

    }
    else if(option=="Q") /// If 'Q' is chooses then it will quit the program
    {
        exit();  /// Terminates the programs 
    }
    else
    {
        printf("\n Invalid Press!"); /// If any other option is choose it will show Invalid Press
    }
    return 0;
}
