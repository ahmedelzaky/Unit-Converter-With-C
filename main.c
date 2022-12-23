#include "main.h"

int main() {
    char op_num ;

    while( 1 ) {
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
        printf("\n \n");


        if (op_num == 27) {

            printf("\n    program ended   \n");
            return 0;

        } else {
            system("cls");
            switch(op_num) {
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
                printf("  Worng Entery  \n");
                break;

            }

        }

    }

    return 0;

}
