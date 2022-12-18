#include"angle.h"
int angle_coverter() {
    char end_c;
    float theta;
    float radian,degree;
    while(1) {
        printf("choose from this list!\n");
        printf("prees 1 to convert degree to radian.\n");
        printf("prees 2 to convert  radian to degree.\n");

        scanf("%f",&theta);
        if(theta==1) {
            printf("enter angle with degree\n");
            scanf("%f",&degree);
            radian=degree*(3.14159/180);

            printf("the angle:%8.6f degree is equal in radian:%8.6f\n",degree,radian);
        }

        else if(theta==2) {
            printf("enter angle with radian\n");
            scanf("%f",&radian);
            degree=radian*(180/3.14159);
            printf("the angle:%8.6f radian is equal in degree:%8.6f\n",radian,degree);

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
