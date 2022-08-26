#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct score
{
    int sports;
    int gk;
    int bw;
    int logicalReasoning;
}s;
int sports();
int gk();
int bw();
int logicalReasoning();
void HELP();
void GAME();
void title(){
    printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\t\t\t                                    !!!!!!ENJOY!!!!!!                                              \n");
    printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
}

int main()
{
     char choice;
     char name[20];
     printf("\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
     printf("\n\n\t\t        *WELCOME TO MASTER MIND*");
     printf("\n\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
     printf("\n\n\t\t         !!!!!TEST YOUR BRAIN!!!!      ") ;
     printf("\n\t\t==================================================");
     printf("\n\t\t--> Press S to start the game");
     printf("\n\t\t--> Press H for HELP           ");
     printf("\n\t\t--> Press Q to QUIT             ");
     printf("\n\t\t==================================================\n\t\t");
     choice=getch();

     if (choice=='H'|| choice=='h')
	{
      HELP();
	}
    if (choice=='Q'|| choice=='q')
	exit(1);
    if(choice=='S'|| choice=='s')
    {
		system("cls");
        title();
     printf("\n\t\t--------------  *WELCOME TO THE GAME* -----------------------");
    printf("\n\n\t\t-------------INSTRUCTIONS FOR PLAYING THE GAME-----------------------");
    printf("\n --> The quiz consists of 4 themes:");
    printf("\nA.SPORTS\t\tB. G.K\nC. LOGICAL REASONING\t\t D. BOLLYWOOD");
    printf("\n--> You may choose any one and then you will have to answer 5 questions related to the chosen theme");
    printf("\n--> Each correct answer will give you 1 point, so can earn maximum 5 points in each theme");
    printf("\n--> For each question, you will be given 4 options and you have to press A, B ,C or D for the right option");
    GAME();
    }
    printf("\n\nYour scores in all the games you have played\n");
    printf("A) Sports--> %d\n",s.sports);
    printf("B) General Knowledge--> %d\n",s.gk);
    printf("C) Logical Reasoning--> %d\n",s.logicalReasoning);
    printf("D) Bollywood--> %d\n",s.bw);

    return 0;
}


void GAME()
{
    char name[50],choice;
	system("cls");
    title();
    printf("\n\n\n\n\t\t\tRegister your name:");
    fflush(stdin);
    gets(name);
    printf("\n\t\t\tHey,%s !!!",name);
    printf("\n\nChoose The Theme:\n\n");
    game:
    printf("\n\t(A) SPORTS                  (B) GK       ");
    printf("\n\t(C) LOGICAL REASONING       (D) BOLLYWOOD ");

    fflush(stdin);
    scanf("%c",&choice);
    if(choice!='a' && choice!='b' &&choice!='c' && choice!='d' && choice!='A' && choice!='B' && choice!='C' && choice!='D')
    {
        printf("\n-----------INVALID OPTION-------------\n");
        printf("\n\t\tHey,%s !!!",name);
        printf("\n\nChoose The Theme Again:\n\n");
        goto game;
    }
    printf("You have chosen the theme %c\n", choice);
    printf("Your Round is about to start....\n");
      printf("\t\t**All the best\n");

        switch(choice)
        {
        case 'a':
        case 'A':
            s.sports=sports();
            break;
            case 'b':
        case 'B':
            s.gk=gk();
            break;
        case 'c':
        case 'C':
            s.logicalReasoning=logicalReasoning();
            break;
        case 'd':
        case 'D':
            s.bw=bw();

        }

}


int sports()
{
    int correct=0,ques;
     char ready;
     system("cls");
     title();
     tag_line:

     printf("\nReady to begin? Y/N:\t");
     fflush(stdin);
     scanf("%c",&ready);
     if(ready=='Y' ||  ready=='y')
     {

     for(int i=1;i<=5;i++)
     {
      char op;
      switch(i)
		{
		case 1:
		printf("\n\nQ.1  How many players are there on each side in a basketball match? ");
		printf("\n\nA.7\t\tB.5\n\nC.9\t\tD.11\n");
		fflush(stdin);
		scanf("%c",&op);
		    if(op=='B' || op=='b')
            {
                printf("\n\n----------WOOOAAHHH...CORRECTT ANSS!! !!!----------");correct++;
                printf("\nPress any key for next question");
                getch();

            }
            else
            {
                printf("\n\n----------OOoops!!!You are wrong---- %c >< --- The correct answer is B------------",op);
                printf("\nPress any key for next question");
                getch();

            }
             break;

        case 2:
        printf("\n\nQ.2 Indonesia National Game is?");
		printf("\n\nA.Hockey\t\tB.Archery\n\nC.Badminton\t\tD.Table Tennis\n");
        fflush(stdin);
        scanf("%c",&op);
            if(op=='C' || op=='c')
			{
                printf("\n\n------------WOOOAAHHH...CORRECT ANSS!!!------------");correct++;
                printf("\nPress any key for next question");
			    getch();

            }
            else
            {
                printf("\n\n-------------OOoops!!!---- %c >< --- The correct answer is C--------------",op);
                printf("\nPress any key for next question");
                getch();

            }
              break;

        case 3:
		printf("\n\nQ.3 Which among the following is not a trophy or cup related to Hockey?  ");
		printf("\n\nA.Narang Cup\t\tB.Indira Gold Cup\n\nC.Gurmeet Trophy\t\tD.Bombay Gold Cup\n");
		fflush(stdin);
        scanf("%c",&op);
            if(op=='A' || op=='a')
			{
			    printf("\n\n--------------WOOOAAHHH... CORRECT ANSS!!!--------------");correct++;
			    printf("\nPress any key for next question");
			    getch();
            }
            else
            {
		           printf("\n\n------------OOoops!!!---- %c >< --- The correct answer is A--------------",op);
                   printf("\nPress any key for next question");
		           getch();
            }
             break;

        case 4:
		printf("\n\nQ.4 Which among the following cricketers has not won 'Rajiv Gandhi Khel Ratna' Award");
		printf("\n\nA.Rohit Sharma\t\tB.M.S.Dhoni\n\nC.Kapil Dev\tD.Virat Kohli\n");
		fflush(stdin);
        scanf("%c",&op);
            if(op=='C' || op=='c')
			{
			    printf("\n\n--------------WOOOAAHHH...CORRECT ANSS!!!-----------");correct++;
			    printf("\nPress any key for next question");
			    getch();
            }
            else
            {
		           printf("\n\n------------OOoops!!!---- %c >< --- The correct answer is C--------------",op);
                   printf("\nPress any key for next question");
		           getch();

            }
             break;

        case 5:
        printf("\n\nQ.5 What are the mascots for Tokyo Olympics 2021?\n");
		printf("\n\nA.Athena & Phevos\t\tB.Soohorang\n\nC.Vinicius\tD.Miraitowa & Someity\n");
		fflush(stdin);
        scanf("%c",&op);
            if(op=='D' || op=='d')
			{
			    printf("\n\n-----------WOOOAAHHH... CORRECT ANSS!!!-------------");correct++;
			    printf("\nPress any key to continue");
			    getch();

            }
            else
            {
                printf("\n\n-----------OOoops!!!---- %c >< --- The correct answer is D--------------",op);
                printf("\nPress any key to continue");
                getch();
            }

		  }

        }

            printf("\n\nYour Quiz is Complete\nPress V to view your score:");
            char choice;
            fflush(stdin);
            scanf("%c", &choice);
            if(choice=='v'||choice=='V')
            {
                if(correct==5)
                {
                printf("*****CONGRATULATIONS*****\n");
                printf("***You Got All 5 Questions Correct***\n\n");
                }
                else
                printf("Your score is %i/5\n\n", correct);
             }
    }

    else
    {
        char x;
        printf("\n\n--> Press H for help ");
        printf("\n--> Press S to go to main menu");
        printf("\n-->Press Y to resume the game\n");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='H' || x=='h')
            HELP();
        else if(x=='S' || x=='s')
            GAME();
        else if(x=='y' || x=='Y')
            goto tag_line;
      }
      printf("\nWould you like to try other themes?(Y/N)\n");
      fflush(stdin);
      char c=getch();
      if(c=='y'||c=='Y')
        GAME();
   return correct;
}


int gk()
{
    char choice;
    int score=0;
    system("cls");
    title();
    printf("\nReady to begin? Y/N:\t");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        gk:
    printf("Q1\nNational Income estimates in India are prepared by:\nA) Planning Commission	\nB) Reserve Bank of India\nC) Central statistical organization\nD) Indian statistical Institute\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {

    case 'c':
    case 'C':
        printf("***CORRECT ANSWER!!!!***\n\nPress any key to continue\n\n");
        score++;
        getch();
        break;
   default:
   printf("---------------Sorry! The correct answer is 'C', Central statistical organization---------------\n\nPress any key to continue\n\n");
   getch();
    }

        printf("Q2\nThe tropic of cancer does not pass through which of these Indian states ?\nA) Madhya Pradesh\nB) West Bengal\nC) Rajasthan\nD) Odisha\n");
        fflush(stdin);
        scanf("%c", &choice);
        switch(choice)
    {

    case 'd':
    case 'D':
        printf("***CORRECT ANSWER!!!!***\n\nPress any key to continue\n\n");
        score++;
        getch();
        break;
   default:
   printf("---------------Sorry! The correct answer is 'D', Odisha---------------\n\nPress any key to continue\n\n");
   getch();
    }
    printf("Q3\nWho proposed the Preamble before the Drafting Committee of the Constitution\nA) Jawaharlal Nehru\nB) B.R. Ambedkar\nC) B.N.Rau\nD) Mahatma Gandhi\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {

    case 'a':
    case 'A':
        printf("***CORRECT ANSWER!!!!***\n\nPress any key to continue\n\n");
        score++;
        getch();
        break;
   default:
   printf("---------------Sorry! The correct answer is 'A', Jawaharlal Nehru---------------\n\nPress any key to continue\n\n");
   getch();
    }

    printf("Q4\nThe place of origin of an earthquake is called\nA) Epicentre\nB) Seismal\nC) Focus\nD) Amphidromic Point\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {

    case 'c':
    case 'C':
        printf("***CORRECT ANSWER!!!!***\n\nPress any key to continue\n\n");
        score++;
        getch();
        break;
   default:
   printf("---------------Sorry! The correct answer is 'C', Focus---------------\n\nPress any key to continue\n\n");
   getch();
    }
    printf("Q5\nThe first news paper in the world was started by ?\nA) Japan\nB) China\nC) USA\nD) India\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {

    case 'b':
    case 'B':
        printf("***CORRECT ANSWER!!!!***\n\nPress any key to continue\n\n");
        score++;
        getch();
        break;
   default:
   printf("---------------Sorry! The correct answer is 'B', China---------------\n\nPress any key to continue\n\n");
   getch();
    }
    printf("Your Quiz is Complete\nPress V to view your score:");
    fflush(stdin);
    scanf("%c", &choice);
    if(choice=='v'||choice=='V')
    {
        if(score==5)
            {
            printf("*****CONGRATULATIONS*****\n");
            printf("***You Got All 5 Questions Correct***\n\n");
            }
        else
            printf("Your score is %i/5\n\n", score);

     }

   }
      else
      {
           char x;
        printf("\n\n--> Press H for help ");
        printf("\n--> Press S to go to main menu");
        printf("\n-->Press Y to resume the game\n");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='H' || x=='h')
            HELP();
        else if(x=='S' || x=='s')
            GAME();
        else if(x=='y' || x=='Y')
            goto gk;
      }
      printf("\n\nWould you like to try other themes?(Y/N)\n");
      fflush(stdin);
      char c=getch();
      if(c=='y'||c=='Y')
        GAME();

    return score;
}


    void ShowQuestion(int question_number)
    {
    switch (question_number) {
  case 1:
    printf("\n\n Look at this series: 12, 11, 13, 12, 14, 13,... What number should come next?");
    printf("\n\nA.10\t\tB.16\n\nC.15\t\tD.13\n");
    break;
  case 2:
    printf("\n\n\n Which word does NOT belong with the others?");
    printf("\n\nA.Index\t\tB.Glossary\n\nC.Book\t\tD.Chapter\n");
    break;
  case 3:
    printf("\n\n\n CUP : LIP :: BIRD : ?");
    printf("\n\nA.GRASS\t\tB.BEAK\n\nC.BUSH\t\tD.FOREST\n");
    break;
  case 4:
    printf("\n\n\n Look at this series: 7, 10, 8, 11, 9, 12.... What number should come next?");
    printf("\n\n7.\t\tB.12\n\nC.10\t\tD.13\n ");
    break;
  case 5:
    printf("\n\n\n Which word does NOT belong with the others?");
    printf("\n\nA.WING\t\tB.FIN\n\nC.BEAK\t\tD.RUDDER \n ");
    break;
  }

}

 char GetUserSelectedOption()

 {
     fflush(stdin);

     char user_option=getch();
     return user_option;
 }

   char GetCorrectOption(int question_number) {
  switch (question_number) {
  case 1:
    return 'D';
    break;
  case 2:
    return 'C';
    break;
  case 3:
    return 'B';
    break;
  case 4:
    return 'C';
    break;
  case 5:
    return 'C';
    break;
  }

}

int  CheckUserOption(char user_option, char correct_option) {
  int correct_answer =0;
  if (correct_option == user_option || correct_option + 32 == user_option)
    {
       correct_answer++;
       printf("\n\n***Correct!!!****");
    }
  else
   {
    printf("\n\n*****Wrong!!! The correct answer is %c***", correct_option);
  }
   printf("\nENTER ANY KEY TO CONTINUE");
  fflush(stdin);
  getch();
  return correct_answer;
}


int logicalReasoning() {
    int question_number = 1,num_correct_answers = 0;
    system("cls");
    title();
         logical_reasoning:
        printf("\n\nTHIS IS THE ROUND FOR LOGICAL REASINING!!LETS TEST YOUR SKILLS");
        printf("\nReady to begin? Y/N:\t");
        fflush(stdin);
       char ready=getch();
      if(ready=='Y' ||  ready=='y') {

    for ( question_number = 1; question_number <= 5; question_number++)
    {
        ShowQuestion(question_number);
        char user_option = GetUserSelectedOption();
        char correct_option = GetCorrectOption(question_number);
        num_correct_answers += CheckUserOption(user_option, correct_option);
    }

            if (num_correct_answers >= 4)
           printf("\n\n\n\n\t\t****WOAAHHH !!! YOU SCORED %d out of 5****", num_correct_answers);
           else
           printf("\n\n\n\n\t\t***OOPS !!! YOU SCORED %d out of 5  BETTER LUCK NEXT TIME!!!****", num_correct_answers);
      }

         else {
        printf("\n\n--> Press H for help ");
        printf("\n--> Press S to go to main menu");
        printf("\n-->Press Y to resume the game\n");
        fflush(stdin);
         char x=getch();
        if(x=='H' || x=='h')
            HELP();
        else if(x=='S' || x=='s')
            GAME();
        else if(x=='y' || x=='Y')
            goto  logical_reasoning;
      }
     printf("\n\nWould you like to try other themes?(Y/N)\n");
      fflush(stdin);
      char c=getch();
      if(c=='y'||c=='Y')
        GAME();
   return num_correct_answers;

}


int bw()
{
          int i,count=0;
  char ch,ready;
  system("cls");
  title();
  bw:
  printf("\n\n WANNA HAVE SOME FUN..?! LETS PLAY A BOLLYWOOD QUIZ");
     printf("\nReady to begin? Y/N:\t");
     fflush(stdin);
     scanf("%c",&ready);
     if(ready=='Y' ||  ready=='y')
{
  for(i=1;i<=5;i++)
     {

switch(i)
  {
        case 1:
		printf("\n\nWhat is the name of Sholay's iconic villain? ");
		printf("\n\nA.Kalia  \t\tB.Gabbar Singh\n\nC.Shakaal\t\tD.Bulla");
		ch =getch();
		if (ch=='B'||ch=='b')
        {
			    printf("\n\nYOU ARE CORRECT!!!\npress any key to continue");
			    count++;
			    getch();
			    break;
        }
		else
        {
                printf("\n\n OPPS!!!! YOU ARE WRONG!!! The correct answer is B.Gabbar Singh\npress any key to continue");
                getch();
		        break;
        }

        case 2:
		printf("\n\n\nIn Om Shanti Om, what does Deepika Padukone's character Shantipriya do? ");
		printf("\n\nA.Singer\t\tB.Actress\n\nC.Journalist\t\tD.Lawyer");
		 ch =getch();
		 if (ch=='B'||ch=='b')
			{printf("\n\nWOAHH!!YOU ARE CORRECT!!!\npress any key to continue");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nOPPS!!!! YOU ARE WRONG!!!The correct answer is B.Actress\npress any key to continue ");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n What is the name of the lead female character in Dilwale Dulhania Le Jayenge?");
		printf("\n\nA.Senorita\t\tB.Simran\n\nC.Sunita\t\tD.Pooja");
		ch =getch();
		 if (ch=='B'||ch=='b')
			{printf("\n\nWOAHH!!YOU ARE CORRECT!!!\npress any key to continue");
			count++;
			getch();
			break;}
		else
		       {printf("\n\n OPPS YOU ARE WRONG!!!The correct answer is B.Simran \npress any key to continue");
		       getch();
		       break;}

        case 4:
		{printf("\n\n\nFinish the quote from Deewar: Mere paas _. ");
		printf("\n\nA.Baap Hai\t\tB.Paisa Hai\n\nC.Maa Hai\t\tD.Naya iPhone Hai");
		ch =getch();
        if (ch=='c'||ch=='C')
			{printf("\n\nWOAHHH!!YOU ARE CORRECT!!!\npress any key to continue");
			count++;
			getch();
			 break;}
		else
		       {printf("\n\nOPPS!!! YOU ARE WRONG!!! The correct answer is C.Maa Hai\npress any key to continue");
		       getch();
		       break;}}

        case 5:
        printf("\n\n\nIn 3 Idiots, what is Rancho's real name? ");
        printf("\n\nA.Ranchhoddas Shamaldas Chanchad\t\tB.Chatur Ramalingam\n\nC.Phunsukh Wangdu\t\t\t\tD.Viru Sahastrabuddhe");
        ch =getch();
        if (ch=='c'||ch=='C')
               {printf("\n\nWOAHH!!YOU ARE CORRECT!!!\npress any key to continue");
               count++;
               getch();
                break;}
        else
		       {printf("\n\nOPPS!!YOU ARE WRONG!!! The correct answer is C.Phunsukh Wangdu\npress any key to continue");
		       getch();
		       break;}
  }
  }
		       printf("\n\nYour Quiz is Complete\nPress V to view your score:");
            char choice;
            fflush(stdin);
            scanf("%c", &choice);
            if(choice=='v'||choice=='V')
            {
                if(count==5)
                {
                printf("*****CONGRATULATIONS*****\n");
                printf("***You Got All 5 Questions Correct***\n\n");
                }
                else
                printf("Your score is %i/5\n\n", count);
             }
        }
     else
    {
        char x;
        printf("\n\n--> Press H for help ");
        printf("\n--> Press S to go to main menu");
        printf("\n-->Press Y to resume the game\n");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='H' || x=='h')
            HELP();
        else if(x=='S' || x=='s')
            GAME();
        else if(x=='y' || x=='Y')
            goto bw;
      }
      printf("\n\nWould you like to try other themes?(Y/N)\n");
      fflush(stdin);
      char c=getch();
      if(c=='y'||c=='Y')
        GAME();
     return count;

}


void HELP()
{
		system("cls");
        printf("\n\t\t:::--------------  Welcome To The Master Mindd -----------------------:::");
        printf("\n\n\t\t:::-------------INSTRUCTIONS FOR PLAYING THE GAME-----------------------:::");
        printf("\n--> The quiz consists of 4 themes:");
        printf("\nA.SPORTS\t\t B. G.K\nC. LOGICAL REASONING\t\t D. BOLLYWOOD");
        printf("\n--> You may choose any one and then you will have to answer 5 questions related to the chosen theme");
        printf("\n--> Each correct answer will give you 1 point, so can earn maximum 5 points in each theme");
        printf("\n--> For each question, you will be given 4 options and you have to press A, B ,C or D for the right option");
        printf("\n\nPress any key to start the game");
        getch();
        GAME();
}
