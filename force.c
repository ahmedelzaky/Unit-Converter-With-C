#include "force.h"

void force_coverter(void) {
    while(1) {
        float force;
        int unit;
        char end_c;
        printf("Enter the unit of the force :\n 1- Newton. \n 2- Pound. \n ");
        scanf("%d",&unit);
        if(unit==1) {
            printf("Enter The Force Value :\n");
            scanf("%f",&force);
            force=force/4.448222;
            printf("The force = %f Ib",force);

        } else if(unit==2) {
            printf("Enter The Force Value :\n");
            scanf("%f",&force);
            force=force*4.448222;
            printf("The force = %f N\n",force);

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