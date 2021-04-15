#include<stdio.h>
#include<stdlib.h>
#include"operations.h"
#include"functions.h"
int main()
{
    displaymenu();
    char name[30];
    char option[3];
    scanf("%s",&option);

    if(option=="S")
    {
        printf("Enter Name");
        gets(name);
        displayrules();
        if(getchar()=='Y')
        {
            startpracticegame();
            displayoption();
            if(getchar()=='C')
            {
                startgame();
            }
            else{displaymenu();}
        }
        else if(getchar()=='N')
        {
            displaymenu();
        }
        else
        {
            printf("\n Invalid Press!");
        }

    }
    else if(option=="Q")
    {
        
    }
    else
    {
        printf("\n Invalid Press!");
    }
    return 0;
}