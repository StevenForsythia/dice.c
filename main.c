#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dadu, ulang;
    int random;
    srand(time(NULL));

    puts("==================");
    puts("| FORSYTHIA DICE |");
    puts("==================");

    do{
        printf("Main dadu [y/t]: ");
        scanf(" %c", &dadu);

        random = 1+(rand() % 6);

        if(dadu == 'y'){
            printf("\n");
            if(random == 1){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*           *\n");
                printf("*     *     *\n");
                printf("*           *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }else if(random == 2){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*   *       *\n");
                printf("*           *\n");
                printf("*       *   *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }else if(random == 3){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*       *   *\n");
                printf("*     *     *\n");
                printf("*   *       *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }else if(random == 4){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*   *   *   *\n");
                printf("*           *\n");
                printf("*   *   *   *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }else if(random == 5){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*   *   *   *\n");
                printf("*     *     *\n");
                printf("*   *   *   *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }else if(random == 6){
                printf("* * * * * * *\n");
                printf("*           *\n");
                printf("*   *   *   *\n");
                printf("*   *   *   *\n");
                printf("*   *   *   *\n");
                printf("*           *\n");
                printf("* * * * * * *\n");
            }
            printf("HASIL: %d", random);
        }

        printf("\n\n");

    }while(dadu != 't');

    return 0;
}
