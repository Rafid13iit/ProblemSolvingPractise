#include <stdio.h>
int main ()
{
    int n, i, j, sum = 0;
    scanf("%d", &n);

    int a[n][3];

    for (i=0; i<n; i++){
        for (j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (j=0; j<3; j++){
        for (i=0; i<n; i++){
            sum = sum + a[i][j];
        }

        if (sum != 0) break;
    }

    if (sum != 0) printf("NO");
    else printf("YES");

    return 0;
}
