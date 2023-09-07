#include <stdio.h>
#include <string.h>
int main ()
{
    int n, t, i, j;
    scanf("%d%d", &n, &t);

    char a[n+1], temp;
    scanf("%s", a);

    for (i=0; i<t; i++)
        for (j=0; j<n+1; j++){

            if (a[j] == 'B' && a[j+1] == 'G'){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                j++;
            }
        }

    printf(a);

    return 0;
}
