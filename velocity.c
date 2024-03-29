#include "velocity.h"
void velocity_converter(void)
{
    system("cls");

    short unit;
    float velocity;
    char end_c;
    while (1)
    {
        printf("    -----------------------\n");
        printf("    | 1 | - m/s to km/h    |\n");
        printf("    | 2 | - m/s to mile/h  |\n");
        printf("    | 3 | - km/h to mile/h |\n");
        printf("    | 4 | - km/h to m/s    |\n");
        printf("    | 5 | - mile/h to m/s  |\n");
        printf("    | 6 | - mile/h to km/h |\n");
        printf("    -----------------------\n");

        printf("    choose the conversation of velocity\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &unit);
        if (unit == 1)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f km/h\n", (velocity * 18 / 5));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 2)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f mile/h\n", (velocity * 2.23694));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 3)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f mile/h\n", (velocity * 0.621371));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 4)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f m/s\n", (velocity * 5 / 18));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 5)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f m/s\n", (velocity * 0.44704));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (unit == 6)
        {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0)
            {
                printf("  the velocity = %.3f km/h\n", (velocity * 1.60934));
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
        printf("\n press Esc to back to main menu or any thing to continue\n");
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
