#include"mass.h"
void mass_converter(void) {
    system("cls");

    char end_c;
    short number;
    float kg,pound,g,tons;
    while(1) {
        printf ("  choose from this list \n");
        printf ("  --------------------\n");
        printf ("  | 1 | - kelogrames. |\n" );
        printf ("  | 2 | - grams.      |\n" );
        printf ("  | 3 | - tons.       |\n" );
        printf ("  | 4 | - pound.      |\n" );
        printf ("  --------------------\n");
        fflush(stdin);
        printf("\n>> ");
        scanf("%d",&number);
        if(number==1) {
            printf("  enter number of kg\n");
            printf("\n>> ");
            scanf("%f",&kg);
            pound=kg/0.454;
            g=kg*1000;
            tons=kg/1000;
            if(kg>=0) {
                printf("  the mass of:%8.6f kg is equal\n",kg);
                printf("  %8.6f pound\n",pound);
                printf("  %8.6f g\n",g);
                printf("  %8.6f tons\n",tons);
            } else {
                printf("\n  Worng Entery  \n");
            }
        } else if(number==2) {
            printf("  enter number of grames\n");
            printf("\n>> ");
            scanf("%f",&g);
            kg=g/1000;
            pound=g/454;
            tons=g/1000000;
            if(g>=0) {
                printf("  the mass of:%8.6f g is equal\n",g);
                printf("  %8.6f kg\n",kg);
                printf("  %8.6f pound\n",pound);
                printf("  %8.6f tons\n",tons);
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if(number==3) {
            printf("  enter number of tons\n");
            printf("\n>> ");
            scanf("%f",&tons);
            g=tons*1000000;
            pound=tons/.000454;
            kg=tons*1000;
            if(tons>=0) {
                printf("  the mass of:%8.6f tons is equal\n",tons);
                printf("  %8.6f g\n",g);
                printf("  %8.6f pound\n",pound);
                printf("  %8.6f kg\n",kg);
            } else {
                printf("\n  Worng Entery  \n");
            }

        } else if (number==4) {
            printf("  enter number of pounds\n");
            printf("\n>> ");
            scanf("%f",&pound);
            g=454*pound;
            tons=.000454*pound;
            kg=.454*pound;
            if(pound>=0) {
                printf("  the mass of%8.3f pound is equal\n",pound);
                printf("  %8.6f g\n",g);
                printf("  %8.6f tons\n",tons);
                printf("  %8.6f kg\n",kg);
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
