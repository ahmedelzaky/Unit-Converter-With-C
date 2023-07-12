
#include "volume.h"

void volume_coverter(void)
{
    system("cls");
    short unit;
    float volume;
    char end_c;
    while (1)
    {
        printf("    --------------------------\n");
        printf("    | 1 | - m^3 to liters     |\n");
        printf("    | 2 | - m^3 to gallon     |\n");
        printf("    | 3 | - liters to m^3     |\n");
        printf("    | 4 | - liters to gallon  |\n");
        printf("    | 5 | - gallon to m^3     |\n");
        printf("    | 6 | - gallon to liters  |\n");
        printf("    --------------------------\n");

        printf("    choose the conversation of volume\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &unit);
        if (unit == 1)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("  the volume = %.4f liters\n", (volume * 1000));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 2)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("  the volume = %.4f gallon\n", (volume * 264.172));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 3)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("the volume = %.4f m^3\n", (volume * 0.001));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 4)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("  the volume = %.4f gallon\n", (volume * 0.264172));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 5)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("  the volume = %.4f m^3\n", (volume * 0.00378541));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 6)
        {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0)
            {
                printf("  the volume = %.4f litres\n", (volume * 3.78541));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else
        {
            printf("\n  Wrong Entry  \n");
        }
        printf("\n  press Esc to back to main menu or any thing to continue\n");
        printf("\n>> ");
        end_c = getch();
        system("cls");

        if (end_c == 27)
        {
            main();
            break;
        }
    }
    system("cls");
}
