#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct play {
            char name[20];
            int score;
            int rat;

void score();
void start();
void help();
void choice();


int main()
{
	printf("Welcome to the quiz\n");
	printf("Enter your choice\n");
	choice();
}
void choice()
{
       char chc=0;

    printf("Press 1 to start the game\n\t2 to see scores \n\t3 to see game help\n\t0 to exit :   ");
    scanf(" %c",&chc);

    switch(chc)
    {
        case '1':
        start();
        break;

        case '2':
        score();
        break;

        case '3':
        help();
        break;

        case '0':
            exit(1);
            break;

          default:
          printf("Please enter a valid option\n");
    }

}


void help()
{
     int ch;

     printf("\n\n ********* INSTRUCTIONS*********");
     printf("\n -------------------------------------------------------------------------");
     printf("\n >> There will be a total of 20 questions");
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
     printf("\n    right option or 0 to quit anytime you want to.");
     printf("\n >> Each question will carry 5 points");
     printf("\n >> You will be asked questions continuously.");
     printf("\n >> There is no negative marking for wrong answer");

    printf("\n\n ********* BEST OF LUCK *********\n\n");

    choice();

}

void start()
{
          int count=0,v=1;
          char rating[20],ans;

          FILE *fp;

          if((fp=fopen("play2.txt","a"))==NULL)
             {
                 printf("error opening file\n");
             }


        printf("\nPlease enter your name: ");
        scanf("%s",p.name);




        printf("*******Hello %s,  Welcome  the Quiz Game ********* \n", p.name);
        printf("Before you start, remember you have to press 1, 2 ,3 or 4 for the");
     printf("\n    right option or 0 to quit anytime you want to.\n\n");

    while(v==1)
        {
            printf("Q(1).In 1875, Daniel Peter produced the first milk chocolate bar using powdered milk. What nationality was he? \n 1.English \t\t2.Swiss\n 3.Scottish\t\t4.French\n\n");

        printf("Your answer: ");
        scanf(" %c",&ans);

        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}

        if(ans=='2')
        {
            printf("Correct! +5 points\n\n");
            ++count;

        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }

        else
        {
            printf("Wrong answer! Correct answer is 2.Swiss\n\n");
        }

        printf("Q(2) What scientist discovered the radioactive element radium? \n 1.Isaac Newton\t\t2.Albert Einstein \n 3.Benjamin Franklin\t\t4.Marie Curie\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}

        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;

        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 4.Marie Curie\n\n");
        }

        printf("Q(3) Shakespeare's character named \"Beatrice\" appears in which play? \n 1.The Tempest\t\t2.Othello\n 3.A Midsummer Night's Dream\t\t4.Much Ado About Nothing\n\n");

        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}

        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 4.Much Ado About Nothing\n\n");
        }


        printf("Q(4).Which country's football team has lifted the 2018 Intercontinental Cup football title? \n 1.India\t\t2.SriLanka\n 3.Kenya\t\t4.Argentina\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 1.India\n\n");
        }

        printf("Q(5).Which country will host the 45th G7 summit 2019? \n 1.Italy\t\t2.Germany\n 3.France\t\t4.Canada\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='3')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 3.France\n\n");
        }


	printf("Q(6) What is the name for Jewish new year \n 1.Rosh Hashanah \t\t2.Yom Kippur\n 3.Hanukkah\t\t 4.Kwanzaa\n\n");

        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}

        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");
            ++count;

        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 1.Rosh Hashanah\n\n");
        }

        printf("Q(7) What did Alfred Nobel develop \n 1.Dynamite\t\t2.Gunpowder \n 3.Nobelium\t\t4.Atomic bomb\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}

        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");

                ++count;

        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
	choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 1.Dynamite\n\n");
        }

        printf("Q(8) What is the name of the boxer whose life story is dipicted in the 1999 movie 'The Hurricane' \n 1.Jake LaMotta\t\t2.Muhammad Ali\n 3.Rocky Marciano\t\t4.Rubin Carter\n\n");

        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 4.Rubin Carter\n\n");
        }


        printf("Q(9).Which country hosted Summer Olympics in 2016 \n 1.Spain\t\t2.China\n 3.Greece\t\t4.Brzil\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 2.Brazil\n\n");
        }

        printf("Q(10).How many blue stripes does the United States of America national flag have \n 1.13\t\t2.0\n 3.7\t\t4.6\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='2')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 2.0\n\n");
        }


        printf("Q(11). What are the main colors on the flag of Spain? \n 1. Black and Yellow\t\t2. Green and White\n 3. Blue and White\t\t4. Red and Yellow\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 4. Red and Yellow\n\n");
        }

        printf("Q(12). Which Asian mountain is also known as the Savage Mountain due to the extreme difficulty of ascent?\n 1. Kanchenjunga\t\t2. K2\n 3. Lhotse\t\t4.Mount Kinabalu\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='2')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 2. K2\n\n");
        }

        printf("Q(13). Which is the largest internal organ in the human body?(by mass)\n 1.Liver\t\t2.Lung\n 3.Heart\t\t4.Pancreas\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 1. Liver\n\n");
        }

        printf("Q(14).  In the Mahabharata, who among these was killed by Krishna?\n 1.Eklavya\t\t2.Karna\n 3.Jayadratha\t\t4.Drona\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is 1.Eklavya\n\n");
        }

        printf("Q(15). Which of these elements is not named after a scientist? \n 1.Einsteinium\t\t2.Curium\n3. Ruthenium\t\t4.Fermium\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='3')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  3. Ruthenium\n\n");
        }

        printf("Q(16). Total number of gold medal won by Indian Hockey Team in Olympics is\n 1.8\t\t2.12\n 3.6\t\t4.9\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='1')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
       else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  1.8\n\n");
        }

        printf("Q(17). Who wrote the famous book - 'We the people'?\n 1.T.N.Kaul\t\t2.J.R.D. Tata\n 3.Khushwant Singh\t\t4.Nani Palkhivala\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='4')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  4.Nani Palkhivala\n\n");
        }

        printf("Q(18).Yellow fever is spread by\n 1.air\t\t2.water\n 3.house fly\t\t4.mosquito\n\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='3')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  3.house fly\n\n");
        }

        printf("Q(19).When is National Army Day celebrated?\n 1.February 13th\t\t2.January 15th\n 3.November 8th\t\t4.December 4th\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='2')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  2.January 15th\n\n");
        }

        printf("Q(20).Ceylon is the former name of what country?\n 1.India\t\t2.Sri Lanka\n 3.Pakistan\t\t4.Austraia\n");
        printf("Your answer: ");
        scanf(" %c",&ans);
        if(ans!='1' && ans!='2' && ans!='3' && ans!='4' && ans!='0')
           {printf("Please enter a valid option\n");
            scanf(" %c",&ans);}
        else if(ans=='2')
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if(ans=='0')
   {
       printf("No worries,You did well. Better luck next time\n");choice();
       break;
   }
        else
        {
            printf("Wrong answer! Correct answer is  2.Sri Lanka\n\n");
        }
	v=0;
    //counting number of correct answers and, ratings
        if(count > 0)
        {
                printf("Thanks for playing, Your scored: %d points \t\n", count*5);


                p.score=count*5;

                if(p.score >= 80)
                {
                    printf("Rating: * * * * *");
                    p.rat=5;
                }
                else if(p.score >= 60 && p.score < 80)
                {
                    printf("Rating: * * * *");
                    p.rat=4;
                }
                else if(p.score >= 40 && p.score < 60)
                {
                    printf("Rating: * * *");
                  p.rat=3;
                }
                else if(p.score >= 20 && p.score < 40)
                {
                    printf("Rating: * *");
                    p.rat=2;
                }
                else if(p.score < 20)
                {
                    printf("Rating: *");
                     p.rat=1;
                }

            //writing to file

                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);
                    fclose(fp);
		    char s;
		printf("\nEnter 1 to replay and 0 to quit\n");
		scanf(" %c",&s);
		if(s=='1')
		choice();
		else
		break;
        }
        else
        {
            printf("Better Luck next time\n");
	    char s;
		printf("\nEnter 1 to replay and 0 to quit\n");
		scanf(" %c",&s);
		if(s=='1')
		choice();
		else
		break;
        }
     }v=0;
}


void score()
{

    int ch;

    FILE *fp;
    if((fp=fopen("play2.txt", "r"))==NULL)
          {
                //printf("error opening file\n");
                printf("\nNo games played yet!\n");
            }
            else
            {

    printf("\n*********** SCORES ***********\n\n");
    printf("NAME\t\tPOINTS\t\tRATING\n");
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF)
    {
        printf("______________________________\n");
        printf("%s\t%d\t\t%d star(s)\n\n",p.name,p.score,p.rat);
    }

    fclose(fp);

    }
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");
    scanf("%d",&ch);

    if(ch==1)
    {
        start();
    }
    else
    {
        exit(1);
    }

}
