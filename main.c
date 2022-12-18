#include "main.h"

int main() {
    char op_num ;

    while( 1 ) {
        printf("\n Welcome to main menu\n");
        printf(" -------------------------\n");
        printf(" Enter The Number of type of\n");
        printf(" Unit you want to convert or ESC to exit \n");
        printf(" ---------------\n");
        printf("| 1 | Temprature|\n");
        printf("| 2 | pressure  |\n");
        printf("| 3 | volume    |\n");
        printf("| 4 | Velocity  |\n");
        printf("| 5 | Lenth     |\n");
        printf("| 6 | Mass      |\n");
        printf("| 7 | angle     |\n");
        printf("| 8 | force     |\n");
        printf(" ---------------\n");
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
                volume_coverter();
                break;

            case '4':
                velocity_converter();
                break;

            case '5':
                length_converter();
                break;

            case '6':
                mass_converter();
                break;

            case '7':
                angle_coverter();
                break;

            case '8':
                force_coverter();
                break;

            default:
                printf("\n\tWorng Entery  \n");
                break;

            }

        }

    }

    return 0;

}
