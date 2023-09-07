#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char a[101];
    gets(a);

    for (i=1; i<strlen(a); i++){

            if (a[i] >= 97){
                i = 0;
                printf(a);
                break;
            }
    }

    if (i != 0) {

            if (a[0] >= 97){

                a[0] = toupper(a[0]);

                for (i=1; i<strlen(a); i++){
                    a[i] = tolower(a[i]);
                }
            }

            else{
                for (i=0; i<strlen(a); i++){
                    a[i] = tolower(a[i]);
                }
            }


            printf(a);

    }

    return 0;
}
