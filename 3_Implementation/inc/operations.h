/* This functions displays the menus for the quiz program.
   It is the first display menu after the execution */

void displaymenu()
{
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press Q to quit          ");
     printf("\n\t\t________________________________________\n\n");
}

/* This functions displays the rules for the quiz program.
   Follow the rules and score points*/


void displayrules()
{
    printf("\n -------------------------------------------------------------------------");
    printf("\n ------------------  Welcome %s to The Game ------------------------------");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\n Here are some rules you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,PRACTICE ROUND & CHALLANGE ROUND");
    printf("\n >> In practice round you will be asked a total of 2 questions to get acquainted with the game");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked total 5 questions");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> You would be given 10 points for each right answer and -1 for each wrong answer");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press N to return to the main menu!");

}

/* This functions displays the options to continue or quit the quiz program.
    */


void displayoption()
{
    printf("\n\n\n Press C  to continue CHALLANGE ROUND of the game!\n");
    printf("\n Press N to return to the main menu!"); 
}
