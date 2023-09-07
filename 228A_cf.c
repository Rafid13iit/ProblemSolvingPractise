#include <stdio.h>
int main ()
{
    int shoe[4], i, j, count = 0;

    for (i=0; i<4; i++){
        scanf("%d", &shoe[i]);
    }

    for (i=0; i<4; i++){
        for (j=i+1; j<4; j++){

            if (shoe[i] == shoe[j]){
                count++;
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}
