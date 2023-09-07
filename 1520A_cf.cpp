#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t, n, i, j, k, c;
    scanf("%d", &t);


    for (i=0; i<t; i++){

        scanf("%d", &n);

        char a[n+1];
        scanf("%s", a);

        for (j=0; j<n; j++){
            if (a[j] == a[j+1]) continue;
            else if (a[j] == a[j+1] && a[j+2] == '\0' || a[j+1] == '\0' && c != 0) {
                    printf("YES\n");
                    continue;
            }

            for (k=j+1; k<n; k++){

                if (a[j] != a[k]) c = 0;
                else {
                    c = 1;
                    printf("NO\n");
                    break;
                }
            }

            if (c == 1) break;
        }

        if (c == 0) printf("YES\n");
    }

    return 0;
}
