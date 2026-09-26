#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

int main()
{
    int t1, t2, zroe = 0, year = 2048, month = 5, day = 26, hour = 16, minute = 10, life = 16, death = 26, exlife = 0, exmonth = 0, charge, num1, num3,game;
    char name[50];

    printf("==============================================================\n\n");
    printf("========================Fly On The Sky========================\n\n");
    printf("======================================================--beta==\n\n");

    for (num3 = 0; num3 < 2; num3++)
    {
        printf("star...1\nstop...0\n");
        scanf("%d", &game);

        if (game == 1)
        {
            printf("Your Name Is......\n");
            printf("     ");
            scanf("%s", name);

            for (num1 = 0; num1 < 30; num1++)
            {
                printf("\n");
            }

            printf("Hellow£¬%s!Let's read fly to sky!\n", name);
            printf("your......\n--------------------\n");
            printf("Name        %s\n", name);
            printf("LastOld     %d\n", death);
            printf("--------------------\nstar\n");

            for (t1 = 0;t1 < 12;t1=zroe)//t1=zroe
            {
                life = life + exlife;
                month = month + exmonth;
                exmonth = 0;
                printf("life %d deaht %d month %d(test....)\n", life, death, month);
                if (life < death)
                {
                    if (month == 13)
                    {
                        life++;
                        year++;
                        month = 1;
                    }
                    else if (month > 13)
                    {
                        life++;
                        year++;
                        month = month % 13;
                        month++;
                    }
                    else
                    {

                        if (day == 32)
                        {
                            month++;
                            day = 1;
                        }
                        else
                        {
                            printf("%d year %d month %d day %d hour %d minute\n", year, month, day, hour, minute);
                            printf("charge....\n1...study----spent 3 moom\n2...go away----spent 2 moom\n3...for you\n4...stop the game----the game in beta so we have not saveQAQ\n");
                            scanf("%d", &charge);
                            if (charge == 1)
                            {
                                printf("you study very hard------Exp up\nspend 3 moom\n\n");
                                exlife = 1;
                                exmonth = 3;
                            }
                            else if (charge == 2)
                            {
                                printf("you go away and nothing happen\nspend 2 moom\n\n");
                                exmonth = 2;
                            }
                            else if (charge == 3)
                            {
                                printf("your......\n--------------------\n");
                                printf("Name        %s\n", name);
                                printf("LastOld     %d\n",death);
                            }
                            else if (charge == 4)
                            {
                                printf("thank you play my game,see you next time =w=\n\n");
                                return 0;
                            }
                            else
                            {
                                printf("!!!the charge is wrong!!!\n");
                                day = 0;
                            }
                        }

                    }


                }
                else break;

            }
            printf("you die...\n\n");
            printf("try again?\n\n");
        }
    }

    return 0;
}