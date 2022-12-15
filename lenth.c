#include "length.h"
void length_converter() {

    int num_of_unit;
    float length ;
    char end_c;
    float m=1.0;
    float ft = 3.048 * m;
    float mile = 16.0934*m;
    float yard = 9.144*m;
    while(1) {
        printf ("Enter the number of the unit \n");
        printf ("|1- meter.|\n" );
        printf ("|2- foot. |\n" );
        printf ("|3- mile. |\n" );
        printf ("|4- yard. |\n" );
        scanf ("%d",&num_of_unit);


        if (num_of_unit ==1) {
            printf ("Enter the lenth \n");
            scanf ("%f",&length);
            printf ("the length in meter =   %.2f m  =  %.2f ft =  %.2f miles =   %.2f yards", (length*m),(length/3.048),(length/15.0934),(length/9.144));
        } else if (num_of_unit ==2) {
            printf ("Enter the lenth \n");
            scanf ("%f",&length);
            printf("the length in foot =%.2f m =  %.2f ft  =   %.2f miles   =   %.2f yards",(length*ft),length,(length*5.28),(length*3));
        } else if (num_of_unit==3) {
            printf ("Enter the lenth \n");
            scanf ("%f",&length);
            printf("the length in mile =  %.2f m =  %.2f ft  =  %.2f miles   =   %.2f yards ",(length*mile),((length*25)/132),length,((length*25)/44));

        } else if (num_of_unit ==4) {
            printf ("Enter the lenth \n");
            scanf ("%f",&length);
            printf("the length in yard  =  %.2f m =  %.2f ft =  %.2f miles  = %.2f yards",(length*yard),(length/3),(length*1.76),length);
        } else {
            printf("\n  Worng Entery  \n");
        }
        printf(" press Esc to back to main menu or any thing to continue\n");
        end_c = getch();
        if (end_c == 27) {
            printf("\n\n");
            break;
        }

    }
}
