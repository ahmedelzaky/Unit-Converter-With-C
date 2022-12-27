#include "force.h"

void force_coverter(void) {
    while(1) {
        float force;
        short unit;
        char end_c;
        printf ("  Enter the unit of the force : \n");
        printf ("  ---------------\n");
        printf ("  | 1 |- Newton  |\n" );
        printf ("  | 2 |- Pound.  |\n" );
        printf ("  ---------------\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d",&unit);
        if(unit==1) {
            printf("  Enter The Force Value :\n");
            printf("\n>> ");
            scanf("%f",&force);
            if(force>=0) {
                force=force/4.448222;
                printf("  The force = %f Ib",force);
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if(unit==2) {
            printf("  Enter The Force Value :\n");
            printf("\n>> ");
            scanf("%f",&force);
            if(force>=0) {
                force=force*4.448222;
                printf("  The force = %f N\n",force);
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
            printf("\n\n");
            break;
        }
    }
    system("cls");

}
