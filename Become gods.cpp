#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

int main()
{
    int lastold = 8, exp = 0, charge, lv = 1, year=0, game, time, day = 0,daay, moom=1,mooom=1, num1, num2, num3,a=1;
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
            printf("LastOld     %d\n", lastold);
            printf("Exp         %d/100\n", exp);
            printf("Lv          %d\n", lv);
            printf("--------------------\nstar\n");

            for (num2 = 0; num2 <= lastold; num2=num2+day)
            {
				printf("the %d year.\n", a);
                if (moom == 12)
                {
                    moom = 1;
                    mooom = 1;
					day = 1;
                }
                else
                {
                    year++;
                    for (moom = 1; moom < 13; moom = moom+day)
                    {

                        if (lv == 10)
                        {
                            lastold = lastold + 1000;
                            printf("LastOld up\n");
                        }
                        else
                        {
                            if (exp == 100)
                            {
                                exp = 0;
                                lv = lv + 1;
                                printf("Lv up\n");
                            }
                            else
                            {
								printf("Is the %d year...And the %d moom...\n", year, moom);
                                printf("charge....\n1...study----spent 3 moom\n2...go away----spent 2 moom\n3...for you\n4...stop the game----the game in beta so we have not saveQAQ\n");
                                scanf("%d", &charge);

                                if (charge == 1)
                                {
                                    printf("you study very hard------Exp up\nspend 3 moom\n\n");
                                    exp = exp + 10;
                                    day = 3;
                                    a=a+day;
                                }
                                else if (charge == 2)
                                {
                                    printf("you go away and nothing happen\nspend 2 moom\n\n");
                                    day = 2;
                                    a = a + day;
                                }
                                else if (charge == 3)
                                {
                                    printf("your......\n--------------------\n");
                                    printf("Name        %s\n", name);
                                    printf("LastOld     %d\n", lastold);
                                    printf("Exp         %d/100\n", exp);
                                    printf("Lv          %d\n\n", lv);
                                    day = 0;
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
                }
            }

            printf("you die...\n\n");
            printf("try again?\n\n");
        }
    }

    return 0;
}