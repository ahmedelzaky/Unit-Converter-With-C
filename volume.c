
#include "volume.h"

void volume_coverter() {
    int unit;
    float volume;
    char end_c;
    while(1) {
        printf("------------------------\n");
        printf ("|1|- m^3 to litres     |\n" );
        printf ("|2|- m^3 to gallon     |\n" );
        printf ("|3|- litres to m^3     |\n" );
        printf ("|4|- litres to gallon  |\n" );
        printf ("|5|- gallon to m^3     |\n" );
        printf ("|6|- gallon to litres  |\n" );
        printf("------------------------\n");

        printf ("choose the conversation of volume\n");
        scanf("%d",&unit);
        if (unit ==1) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf ("the volume = %.4f litres\n", (volume*1000));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (unit ==2) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf("the volume = %.4f gallon\n",(volume*264.172));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (unit==3) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf("the volume = %.4f m^3\n",(volume*0.001));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (unit ==4) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf("the volume = %.4f gallon\n",(volume*0.264172));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (unit==5) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf("the volume = %.4f m^3\n",(volume*0.00378541));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (unit ==6) {
            printf("Enter the volume: \n");
            scanf ("%f",&volume);
            if(volume>=0) {
                printf("the volume = %.4f litres\n",(volume*3.78541));
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else {
            printf("\n  Worng Entery  \n");
        }
        printf("\n  press Esc to back to main menu or any thing to continue\n");
        end_c = getch();
        system("cls");

        if (end_c == 27) {
            printf("\n\n");
            break;
        }
    }
    system("cls");

}
