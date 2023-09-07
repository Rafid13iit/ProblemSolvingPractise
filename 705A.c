#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d", &n);

    char a[n*12];
    a[0] = '\0';

    for (int i=0; i<n; i++){

        if (i+1 == n && (i+1)%2 != 0){
            strcat(a, "I hate it");
            break;
        }
        else if(i+1 == n && (i+1)%2 == 0){
           strcat(a, "I love it");
           break;
        }

        if (i+1 < n && (i+1)%2 != 0){
            strcat(a, "I hate that ");
        }
        else if(i+1 < n && (i+1)%2 == 0){
           strcat(a, "I love that ");
        }
    }

    printf(a);

    return 0;
}
