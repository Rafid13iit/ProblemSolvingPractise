#include <stdio.h>
int main ()
{
    int t, i;
    scanf("%d", &t);

    int a[t][2];

    for (i=0; i<t; i++){
        scanf("%d%d", &a[i][0], &a[i][1]);

        if (2 * a[i][0] <= a[i][1]) printf("%d\n", a[i][1] * a[i][1]);
        else if ((a[i][1] + a[i][1]) >= a[i][0]) printf("%d\n", (a[i][1] + a[i][1]) * (a[i][1] + a[i][1]) );
        else printf("%d\n", a[i][0] * a[i][0]);
    }

    return 0;
}
