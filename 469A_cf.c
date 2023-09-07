#include <stdio.h>
int main ()
{
    int n, p, q, i, j = 0;
    scanf("%d%d", &n, &p);

    int a[p], b[n-p];

    for (i=0; i<p; i++){
        scanf("%d", &a[i]);

        if (a[i] != i+1){
            b[j] = i+1;
            j++;
        }
    }

    while ((n-p) != 0){
        b[j] = n;
        j++;
        n--;
        if (n == p) break;
    }

    scanf("%d", &q);

    int c[q];

    for (i=0; i<q; i++){
        scanf("%d", &c[i]);
    }

    for (p=0; p<j; p++){
        for (i=0; i<q; i++){

            if (b[p] != c[i]){
                n = 0;
                printf("Oh, my keyboard!");
                break;
            }
        }
    }

    if (n != 0) printf("I become the guy.");


    return 0;
}
