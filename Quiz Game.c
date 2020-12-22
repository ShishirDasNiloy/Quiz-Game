#include<stdio.h>
#include<ctype.h>
#include<conio.h>
C()
{
    printf("\n\n\tCorrect!!!\n");
    getch();
}
W()
{
    printf("\n\n\tWrong!!!\n");
    getch();
}
int main()
{
    int i,count,wcount,score,r;
    char playername[20];
    char choice;
    mainhome:
        printf("\n\t\t\t How Smart You Are!!!");
        printf("\n\t\t\t   .................");
        printf("\n\t\t\t  Welcome To The Game");
        printf("\n\t\t\t  -------------------");
        printf("\n\t\t\tThink Twice, Press Once");
        printf("\n\n\t\t    >> Press S to start the game");
        printf("\n\n\t\t          >>Press E to exit");
        printf("\n\n\t\t\t  A game by Shishir!\n\t\t");
        choice=toupper(getch());
        if(choice=='S')
        {
            system("cls");
            printf("\n\n\n\n\n\t\tEnter your Name: ");
            gets(playername);
        }
        else if (choice=='E')
            return 0;
        else
        {
            system("cls");
            goto mainhome;
        }
        system("cls");
        printf("\n\n\t Rules of the game:");
        printf("\n\n\t >Here is 10 question for you with 4 options.");
        printf("\n\n\t >For each correct answer you will get 10 point.");
        printf("\n\n\n\t >Good Luck %s!!",playername);
        printf("\n\n\t\t Press any key to start the game");
        if(toupper(getch())=='p')
            {
                system("cls");
                goto game;
            }
    game:
        count=0;
        wcount=0;
        for(i=1;i<=10;i++)
        {
            system("cls");
            r=i;
            switch(r)
            {
            case 1:
                printf("\n\n\tWhat is the value of 3+3*3-3+3?");
                printf("\n\n\tA.9\t\tB.0\t\tC.12\t\tD.6\n");
                if(toupper(getch())=='C')
                    {
                        count++;
                        C();
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 2:
                printf("\n\n\n\tWhat number would you get multiplying your phone Number?");
                printf("\n\n\tA.Error\t\tB.0\t\tC.Infinity\t\tD.Need Calculator\n");
                if(toupper(getch())=='B')
                    {
                        count++;
                        C();
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 3:
                printf("\n\n\n\tHow many months in a year have 28 days?");
                printf("\n\n\tA.12\t\tB.1\t\tC.7\t\tD.10\n");
                if(toupper(getch())=='A')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 4:
                printf("\n\n\n\tA farmer has twenty bananas and sells all of them except for seven.\n\tHow many does he have left?");
                printf("\n\n\tA.13\t\tB.8\t\tC.7\t\tD.20\n");
                if(toupper(getch())=='C')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 5:
                printf("\n\n\n\t3, 6, 12, 21, 33, ?, 66");
                printf("\n\n\tA.33\t\tB.42\t\tC.54\t\tD.48\n");
                if(toupper(getch())=='D')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 6:
                printf("\n\n\n\tAt a party, everyone shook hands with every one else. There were 66 handshakes.\n\tHow many people were at the party?");
                printf("\n\n\tA.30\t\tB.14\t\tC.12\t\tD.25\n");
                if(toupper(getch())=='C')
                    {
                        C();
                        count++;
                         break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 7:
                printf("\n\n\n\t16, 06, 68, 88, ?, 98");
                printf("\n\n\tA.87\t\tB.78\t\tC.90\t\tD.09\n");
                if(toupper(getch())=='A')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 8:
                printf("\n\n\n\tPointing to a photograph Sunny says,\"He is the son of the only son of my grandfather.\"\n\tHow is the man in the photograph related to Sunny?");
                printf("\n\n\tA.Brother\t\tB.Uncle\t\tC.Father\t\tD.Nephew\n");
                if(toupper(getch())=='A')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 9:
                printf("\n\n\n\tIn one day,how many times do the hour and minute hands of the clock make a straight line?");
                printf("\n\n\tA.34\t\tB.44\t\tC.22\t\tD.64\n");
                if(toupper(getch())=='B')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
                case 10:
                printf("\n\n\n\tWhich word does not belong to others?");
                printf("\n\n\tA.Index\t\tB.Glossary\t\tC.Chapter\t\tD.Book\n");
                if(toupper(getch())=='D')
                    {
                        C();
                        count++;
                        break;
                    }
                else
                {
                    W();
                    wcount++;
                    break;
                }
            }
        }
    score:
        {
            system("cls");
            score=count*10;
            printf("\n\n\n\t\t   Your score is %d %s!!!",score,playername);
            printf("\n\n\n\t\t   Correct answer: %d",count);
            printf("\n\n\n\t\t   Wrong answer: %d",wcount);
            printf("\n\n\n\t\t   Thanks For Playing The Game");
            printf("\n\n\n\n\t\t   >>Press M to Return Main Memu");
            printf("\n\n\t\t   >> Press E to Exit\n\n\n");
            if(toupper(getch())=='M')
            {
                system("cls");
                goto mainhome;
            }
            else if (toupper(getch())=='E')
                return 0;
            else
                system("cls");
                goto score;
        }
}
