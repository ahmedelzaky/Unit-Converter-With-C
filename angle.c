#include "angle.h"

void angle_coverter(void)
{
    char end_c;
    short theta;
    float radian, degree;
    while (1)
    {
        printf("\n    -------------------------\n");
        printf("    Enter the number of the unit \n");
        printf("    -----------------------\n");
        printf("    |1|- degree to radian  |\n");
        printf("    |2|- radian to degree  |\n");
        printf("    -----------------------\n");
        fflush(stdin);
        scanf("%d", &theta);
        if (theta == 1)
        {
            printf("  enter angle with degree\n");
            scanf("%f", &degree);
            radian = degree * (3.14159 / 180);

            printf("  the angle:%8.6f degree is equal in radian:%8.6f\n", degree, radian);
        }

        else if (theta == 2)
        {
            printf("  enter angle with radian\n");
            scanf("%f", &radian);
            degree = radian * (180 / 3.14159);
            printf("  the angle:%8.6f radian is equal in degree:%8.6f\n", radian, degree);
        }
        else
        {
            printf("\n  Worng Entery  \n");
        }
        printf("\n  press Esc to back to main menu or any thing to continue\n");
        end_c = getch();
        system("cls");

        if (end_c == 27)
        {
            printf("\n\n");
            break;
        }
    }
    system("cls");
}
