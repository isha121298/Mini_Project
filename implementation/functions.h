char ans[2];
void startpracticegame()
{
    printf("\n\n\n1) Who founded Apple Computer?");
	printf("\n\nA) Stephen Fry\t\tB) Bill Gates\t\tC) Steve Jobs\t\tD) Stephen Hawking");
	if(getchar()=='C')
	{
    printf("\n\nCorrect!!!");
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is C) Steve Jobs");
    }

    printf("\n\n\n2) Which of these is not a peripheral, in computer terms?");
    printf("\n\nA) Keyboard\t\tB) Monitor\t\tC) Mouse\t\tD) Motherboard");
	if(getchar()=='D')
	{
    printf("\n\nCorrect!!!");
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is D) Motherboard");
    }

}

void startgame()
{
    int score=0;
    ///1st question

    printf("\n\n\n1) What does the Internet prefix WWW stand for?");
    printf("\n\nA) Wide Width Wickets\t\tB) World Wide Web\t\tC) Worldwide Weather\t\tD) Western Washington World");
	if(getchar()=='B')
	{
    printf("\n\nCorrect!!!");
    score+=10;
    printf("\nYour points is %d",score);
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is B) World Wide Web");
        score--;
    }

    ///2nd question

    printf("\n\n\n2) What is the largest country in the world?");
    printf("\n\nA) Russia\t\tB) Canada\t\tC) China\t\tD) United States");
	if(getchar()=='A')
	{
    printf("\n\nCorrect!!!");
    score+=10;
    printf("\nYour points is %d",score);
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is A) Russia");
        score--;
    }

    ///3rd question

    printf("\n\n\n3) MS-Word is an example of _____?");
    printf("\n\nA) An operating system\t\tB) A processing device\t\tC) Application software\t\tD) An input device");
	if(getchar()=='C')
	{
    printf("\n\nCorrect!!!");
    score+=10;
    printf("\nYour points is %d",score);
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is C) Application software");
        score--;
    }


    ///4th question

    printf("\n\n\n4) Who is the first Indian cricketer to have grabbed BCCI's Polly Umrigar Award three times?");
    printf("\n\nA) Sachin Tendulkar\t\tB) M.S. Dhoni\t\tC) Gautam Gambhir\t\tD) Virat Kohli");
	if(getchar()=='D')
	{
    printf("\n\nCorrect!!!");
    score+=10;
    printf("\nYour points is %d",score);
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is D) Virat Kohli");
        score--;
    }

    ///5th question

    printf("\n\n\n5) Junk e-mail is also called ______");
    printf("\n\nA) Spam\t\tB) Spoof\t\tC) Sniffer script\t\tD) Spool");
	if(getchar()=='A')
	{
    printf("\n\nCorrect!!!");
    score+=10;
    printf("\nYour points is %d",score);
    }
	else
	{
        printf("\n\nWrong!!! The correct answer is A) Spam");
        score--;
    }
    
}