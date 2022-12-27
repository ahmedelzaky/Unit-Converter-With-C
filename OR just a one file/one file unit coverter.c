#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void temp_converter(void);
void pressure_coverter(void);
void length_converter(void);
void velocity_converter(void);
void force_coverter(void);
void angle_coverter(void);
void volume_coverter(void);
void mass_converter(void);

int main() {

    char op_num;

    while (1) {
        printf("\n  Welcome to main menu\n");
        printf("  -------------------------\n");
        printf("  Enter The Number of type of\n");
        printf("  Unit you want to convert or\n  ESC to exit \n");
        printf("   ---------------\n");
        printf("  | 1 | Temprature|\n");
        printf("  | 2 | Pressure  |\n");
        printf("  | 3 | Length    |\n");
        printf("  | 4 | Velocity  |\n");
        printf("  | 5 | Force     |\n");
        printf("  | 6 | Mass      |\n");
        printf("  | 7 | Angle     |\n");
        printf("  | 8 | Volume    |\n");
        printf("   ---------------\n");

        fflush(stdin);
        printf("\n>> ");
        op_num = getche();
        printf("\n");

        if (op_num == 27) {

            printf("%s", "\n    program ended   \n");

            return 0;
        } else {

            switch (op_num) {
            case '1':
                temp_converter();
                break;
            case '2':
                pressure_coverter();
                break;
            case '3':
                length_converter();
                break;
            case '4':
                velocity_converter();
                break;
            case '5':
                force_coverter();
                break;
            case '6':
                mass_converter();
                break;
            case '7':
                angle_coverter();
                break;
            case '8':
                volume_coverter();
                break;
            default:
                printf(" %s", "\n Worng Entery  \n");
                printf("\n press Esc  to exit or any thing to continue\n\n");
                printf("\n>> ");
                op_num = getch();

                if (op_num == 27) {
                    printf("%s", "\n    program ended   \n");
                    return 0;
                }

                system("cls");
                break;
            }
        }
    }
    return 0;
}

#include "pressure.h"

void pressure_coverter(void) {
    system("cls");
    char end_c;
    char unit_pre;
    float value_pre;
    while (1) {
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

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Kpa Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 100);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 101.3);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre * 7.501);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre / 6.895);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'B') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Bar Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Kpa  |\n", value_pre * 100);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Atm  |\n", value_pre / 1.013);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr |\n", value_pre * 750.1);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    PSI  |\n", value_pre * 14.504);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'A') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("    -----------------------\n");
                printf("   |%10.4f  Atm Equal  |\n", value_pre);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Kpa   |\n", value_pre * 101.3);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Bar   |\n", value_pre / 1.013);
                printf("   |-----------------------|\n");
                printf("   |%11.4f |    Torr  |\n", value_pre * 760);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    PSI   |\n", value_pre * 14.504);
                printf("    ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'T') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("    -----------------------\n");
                printf("  |%10.4f  Torr Equal |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre / 7.501);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 750.1);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 760);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre / 51.715);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'P') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f  PSI Equal  |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre * 6.895);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 14.504);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 14.696);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre * 51.715);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
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

void pressure_coverter(void) {
    system("cls");
    char end_c;
    char unit_pre;
    float value_pre;
    while (1) {
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

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Kpa Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 100);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 101.3);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre * 7.501);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre / 6.895);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'B') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f Bar Equal   |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Kpa  |\n", value_pre * 100);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    Atm  |\n", value_pre / 1.013);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr |\n", value_pre * 750.1);
                printf("  |-----------------------|\n");
                printf("  |%10.4f   |    PSI  |\n", value_pre * 14.504);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'A') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("    -----------------------\n");
                printf("   |%10.4f  Atm Equal  |\n", value_pre);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Kpa   |\n", value_pre * 101.3);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    Bar   |\n", value_pre / 1.013);
                printf("   |-----------------------|\n");
                printf("   |%11.4f |    Torr  |\n", value_pre * 760);
                printf("   |-----------------------|\n");
                printf("   |%10.4f  |    PSI   |\n", value_pre * 14.504);
                printf("    ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'T') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("    -----------------------\n");
                printf("  |%10.4f  Torr Equal |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre / 7.501);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 750.1);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 760);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    PSI   |\n", value_pre / 51.715);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit_pre == 'P') {
            printf("\n   Enter the value of pressure:\n");
            printf("\n>> ");
            scanf("%f", &value_pre);

            if (value_pre >= 0) {
                printf("   -----------------------\n");
                printf("  |%10.4f  PSI Equal  |\n", value_pre);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Kpa   |\n", value_pre * 6.895);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Bar   |\n", value_pre / 14.504);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Atm   |\n", value_pre / 14.696);
                printf("  |-----------------------|\n");
                printf("  |%10.4f  |    Torr  |\n", value_pre * 51.715);
                printf("   ----------------------\n");
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
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

void length_converter(void) {

    short num_of_unit;
    float length;
    char end_c;
    float m = 1.0;
    float ft = m * .3048;
    float mile = m * 1609.34;
    float yard = m / 1.094;
    while (1) {
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

        if (num_of_unit == 1) {
            printf("  Enter the lenth \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0) {
                printf("  the length in meter =   %.2f m  =  %.2f ft =  %.2f miles =   %.2f yards\n", (length * m), (length * ft), (length * mile), (length * yard));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (num_of_unit == 2) {
            printf("Enter the lenth \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0) {
                printf("  the length in foot =%.2f m =  %.2f ft  =   %.2f miles   =   %.2f yards\n", (length / 3.28), length, (length / 5279.98), (length / 3));
            } else {

                printf("\n  Worng Entery  \n");
            }
        } else if (num_of_unit == 3) {
            printf("Enter the lenth \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0) {
                printf("  the length in mile =  %.2f m =  %.2f ft  =  %.2f miles   =   %.2f yards\n", ++length * 1609.342, length * 5280, length, length * 1760);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (num_of_unit == 4) {
            printf("  Enter the lenth \n");
            printf("\n>> ");
            scanf("%f", &length);
            if (length >= 0) {
                printf("  the length in yard  =  %.2f m =  %.2f ft =  %.2f miles  = %.2f yards\n", (length * yard), (length * 3), (length / 1760), length);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n press Esc to back to main menu or any thing to continue\n");
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
void mass_converter(void) {
    char end_c;
    short number;
    float kg, pound, g, tons;
    while (1) {
        printf("  choose from this list \n");
        printf("  --------------------\n");
        printf("  | 1 | - kelogrames. |\n");
        printf("  | 2 | - grams.      |\n");
        printf("  | 3 | - tons.       |\n");
        printf("  | 4 | - pound.      |\n");
        printf("  --------------------\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &number);
        if (number == 1) {
            printf("  enter number of kg\n");
            printf("\n>> ");
            scanf("%f", &kg);
            pound = kg / 0.454;
            g = kg * 1000;
            tons = kg / 1000;
            if (kg >= 0) {
                printf("  the mass of:%8.6f kg is equal\n", kg);
                printf("  %8.6f pound\n", pound);
                printf("  %8.6f g\n", g);
                printf("  %8.6f tons\n", tons);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (number == 2) {
            printf("  enter number of grames\n");
            printf("\n>> ");
            scanf("%f", &g);
            kg = g / 1000;
            pound = g / 454;
            tons = g / 1000000;
            if (g >= 0) {
                printf("  the mass of:%8.6f g is equal\n", g);
                printf("  %8.6f kg\n", kg);
                printf("  %8.6f pound\n", pound);
                printf("  %8.6f tons\n", tons);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (number == 3) {
            printf("  enter number of tons\n");
            printf("\n>> ");
            scanf("%f", &tons);
            g = tons * 1000000;
            pound = tons / .000454;
            kg = tons * 1000;
            if (tons >= 0) {
                printf("  the mass of:%8.6f tons is equal\n", tons);
                printf("  %8.6f g\n", g);
                printf("  %8.6f pound\n", pound);
                printf("  %8.6f kg\n", kg);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (number == 4) {
            printf("  enter number of pounds\n");
            printf("\n>> ");
            scanf("%f", &pound);
            g = 454 * pound;
            tons = .000454 * pound;
            kg = .454 * pound;
            if (pound >= 0) {
                printf("  the mass of%8.3f pound is equal\n", pound);
                printf("  %8.6f g\n", g);
                printf("  %8.6f tons\n", tons);
                printf("  %8.6f kg\n", kg);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n press Esc to back to main menu or any thing to continue\n");
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

void angle_coverter(void) {
    char end_c;
    short theta;
    float radian, degree;
    while (1) {
        printf("    Enter the number of the unit \n");
        printf("    --------------------------\n");
        printf("    | 1 | - degree to radian  |\n");
        printf("    | 2 | - radian to degree  |\n");
        printf("    --------------------------\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &theta);
        if (theta == 1) {
            printf("  enter angle with degree\n");
            printf("\n>> ");
            scanf("%f", &degree);
            radian = degree * (3.14159 / 180);

            printf("  the angle:%8.6f degree is equal in radian:%8.6f\n", degree, radian);
        }

        else if (theta == 2) {
            printf("  enter angle with radian\n");
            printf("\n>> ");
            scanf("%f", &radian);
            degree = radian * (180 / 3.14159);
            printf("  the angle:%8.6f radian is equal in degree:%8.6f\n", radian, degree);
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n  press Esc to back to main menu or any thing to continue\n");
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
void velocity_converter(void) {
    short unit;
    float velocity;
    char end_c;
    while (1) {
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
        if (unit == 1) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f km/h\n", (velocity * 18 / 5));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 2) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f mile/h\n", (velocity * 2.23694));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 3) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f mile/h\n", (velocity * 0.621371));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 4) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f m/s\n", (velocity * 5 / 18));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 5) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f m/s\n", (velocity * 0.44704));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 6) {
            printf("  Enter the velocity: \n");
            printf("\n>> ");
            scanf("%f", &velocity);
            if (velocity >= 0) {
                printf("  the velocity = %.3f km/h\n", (velocity * 1.60934));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n press Esc to back to main menu or any thing to continue\n");
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

void volume_coverter(void) {
    short unit;
    float volume;
    char end_c;
    while (1) {
        printf("    --------------------------\n");
        printf("    | 1 | - m^3 to litres     |\n");
        printf("    | 2 | - m^3 to gallon     |\n");
        printf("    | 3 | - litres to m^3     |\n");
        printf("    | 4 | - litres to gallon  |\n");
        printf("    | 5 | - gallon to m^3     |\n");
        printf("    | 6 | - gallon to litres  |\n");
        printf("    --------------------------\n");

        printf("    choose the conversation of volume\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d", &unit);
        if (unit == 1) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("  the volume = %.4f litres\n", (volume * 1000));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 2) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("  the volume = %.4f gallon\n", (volume * 264.172));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 3) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("the volume = %.4f m^3\n", (volume * 0.001));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 4) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("  the volume = %.4f gallon\n", (volume * 0.264172));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 5) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("  the volume = %.4f m^3\n", (volume * 0.00378541));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if (unit == 6) {
            printf("  Enter the volume: \n");
            printf("\n>> ");
            scanf("%f", &volume);
            if (volume >= 0) {
                printf("  the volume = %.4f litres\n", (volume * 3.78541));
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n  press Esc to back to main menu or any thing to continue\n");
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

void temp_converter(void) {
    char end_c;
    char unit_temp;
    float value_temp;
    while (1) {
        printf("    Enter the unit of temprature\n");
        printf("     ----------------\n");
        printf("    | C | celsius    |\n");
        printf("    | F | fahrenheit |\n");
        printf("    | K | kelvin     |\n");
        printf("     ----------------\n");

        fflush(stdin);
        printf("\n>> ");
        unit_temp = getche();
        unit_temp = toupper(unit_temp);
        printf("\n");

        if (unit_temp == 'C') {
            printf("\n    Enter the value of temprature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     ------------------------\n");
            printf("    |%8.2f celsius Equal  |\n", value_temp);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |  fahrenheit |\n", (value_temp * 9 / 5) + 32);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |    kelvin   |\n", value_temp + 273.15);
            printf("     ------------------------\n");
        } else if (unit_temp == 'F') {
            printf("\n    Enter the value of temprature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     --------------------------\n");
            printf("    |%8.2f fahrenheit Equal |\n", value_temp);
            printf("    |--------------------------|\n");
            printf("    |%8.2f  |    celsius    |\n", (value_temp - 32) * 5 / 9);
            printf("    |--------------------------|\n");
            printf("    |%8.2f  |    kelvin     |\n", (value_temp - 32) * 5 / 9 + 273.15);
            printf("     --------------------------\n");
        } else if (unit_temp == 'K') {
            printf("\n    Enter the value of temprature:\n");
            printf("\n>> ");
            scanf("%f", &value_temp);
            printf("     ------------------------\n");
            printf("    |%8.2f  kelvin Equal  |\n", value_temp);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |   celsius   |\n", value_temp - 273.15);
            printf("    |------------------------|\n");
            printf("    |%8.2f  |  fahrenheit |\n", (value_temp - 273.15) * 9 / 5 + 32);
            printf("     ------------------------\n");
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n press Esc to back to main menu or any thing to continue\n");
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
