#include "pressure.h"

void pressure_coverter(void) {
    system("cls");

    char end_c;
    char unit_pre;
    float value_pre;
    while(1) {
        printf("  Enter the unit of the pressure\n");
        printf("   --------------\n");
        printf("  | K |   Kpa    |\n");
        printf("  | B |   Bar    |\n");
        printf("  | A |   Atm    |\n");
        printf("  | T |   Torr   |\n");
        printf("  | P |   PSI    |\n");
        printf("   --------------\n");

        fflush(stdin);
        printf("\n>> ");
        unit_pre = getche();
        unit_pre = toupper(unit_pre);
        printf("\n");


        if (unit_pre == 'K') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if(value_pre>=0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Kpa Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 100 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre  / 101.3 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre  * 7.501 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre / 6.895  );
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'B') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if(value_pre>=0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Bar Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Kpa  |\n", value_pre * 100 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Atm  |\n", value_pre  / 1.013 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr |\n", value_pre  * 750.1 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    PSI  |\n", value_pre * 14.504  );
                printf("   ----------------------\n");
            } else {
                printf("\n  Wrong Entry  \n");
            }

        } else if (unit_pre == 'A') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if(value_pre>=0) {
                printf("    -----------------------\n");
                printf("   |%10.4f  Atm Equal  |\n", value_pre);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Kpa   |\n", value_pre * 101.3 );
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Bar   |\n", value_pre  / 1.013 );
                printf("   |-----------------------|\n");
                printf("   |%11.4f |    Torr  |\n", value_pre  * 760 );
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    PSI   |\n", value_pre * 14.504  );
                printf("    ----------------------\n");
            } else {
                printf("\n  Wrong Entry  \n");
            }

        } else if (unit_pre == 'T') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if(value_pre>=0) {
                printf("    -----------------------\n");
                printf("  |%10.4f  Torr Equal |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre / 7.501 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre  / 750.1 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre  / 760 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre /  51.715 );
                printf("   ----------------------\n");
            } else {
                printf("\n  Wrong Entry  \n");
            }

        } else if (unit_pre == 'P') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if(value_pre>=0) {
                printf("   -----------------------\n");
                printf("  |%10.4f  PSI Equal  |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre * 6.895 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre  / 14.504 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre  / 14.696 );
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre *  51.715 );
                printf("   ----------------------\n");
            } else {
                printf("\n  Wrong Entry  \n");
            }

        } else {
            printf("\n  Wrong Entry  \n");
        }

        printf("\n press Esc to back to main menu or any thing to continue\n\n");
        printf("\n>> ");
        end_c = getch();
        system("cls");
        if (end_c == 27) {
            main();
            break;
        }
    }
    system("cls");

}

