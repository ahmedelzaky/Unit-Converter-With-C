#include "Temp.h"

void temp_converter(void)
{
    system("cls");
    char end_c;
    char unit_temp;
    float value_temp;
    while (1)
    {
        printf("    Enter the unit of temperature\n");
        printf("     ----------------\n");
        printf("    | C | Celsius    |\n");
        printf("    | F | Fahrenheit |\n");
        printf("    | K | kelvin     |\n");
        printf("     ----------------\n");

        fflush(stdin);
        printf("\n>> ");
        unit_temp = getche();
        unit_temp = toupper(unit_temp);
        printf("\n");

        if (unit_temp == 'C')
        {
            printf("\n    Enter the value of temperature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     ------------------------\n");
            printf("    |%8.2f Celsius Equal  |\n", value_temp);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |  Fahrenheit |\n", (value_temp * 9 / 5) + 32);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |    kelvin   |\n", value_temp + 273.15);
            printf("     ------------------------\n");
        }
        else if (unit_temp == 'F')
        {
            printf("\n    Enter the value of temprature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     --------------------------\n");
            printf("    |%8.2f Fahrenheit Equal |\n", value_temp);
            printf("    |--------------------------|\n");
            printf("    |%8.2f  |    Celsius    |\n", (value_temp - 32) * 5 / 9);
            printf("    |--------------------------|\n");
            printf("    |%8.2f  |    kelvin     |\n", (value_temp - 32) * 5 / 9 + 273.15);
            printf("     --------------------------\n");
        }
        else if (unit_temp == 'K')
        {
            printf("\n    Enter the value of temprature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     ------------------------\n");
            printf("    |%8.2f  kelvin Equal  |\n", value_temp);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |   Celsius   |\n", value_temp - 273.15);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |  Fahrenheit |\n", (value_temp - 273.15) * 9 / 5 + 32);
            printf("     ------------------------\n");
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

