#include "length.h"

void length_converter(void)
{
    system("cls");

    short num_of_unit;
    float length;
    char end_c;
    float m = 1.0;
    float ft = m * .3048;
    float mile = m / 1609.34;
    float yard = m / 1.094;
    while (1)
    {
        printf("  Enter the number of the unit \n");
        printf("  ---------------\n");
        printf("  | 1 | - meter. |\n");
        printf("  | 2 | - feet.  |\n");
        printf("  | 3 | - mile.  |\n");
        printf("  | 4 | - yard.  |\n");
        printf("  ---------------\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &num_of_unit);

        if (num_of_unit == 1)
        {
            printf("  Enter the length \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0)
            {
                printf("  the length in meter =   %.2f m  =  %.2f ft =  %.2f miles =   %.2f yards\n", (length * m), (length * ft), (length * mile), (length * yard));
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (num_of_unit == 2)
        {
            printf("Enter the length \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0)
            {
                printf("  the length in foot =%.2f m =  %.2f ft  =   %.2f miles   =   %.2f yards\n", (length / 3.28), length, (length / 5279.98), (length / 3));
            }
            else
            {

                printf("\n  Wrong Entry  \n");
            }
        }
        else if (num_of_unit == 3)
        {
            printf("Enter the lenth \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0)
            {
                printf("  the length in mile =  %.2f m =  %.2f ft  =  %.2f miles   =   %.2f yards\n", ++length * 1609.342, length * 5280, length, length * 1760);
            }
            else
            {
                printf("\n  Wrong Entry  \n");
            }
        }
        else if (num_of_unit == 4)
        {
            printf("  Enter the length \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0)
            {
                printf("  the length in yard  =  %.2f m =  %.2f ft =  %.2f miles  = %.2f yards\n", (length * yard), (length * 3), (length / 1760), length);
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
