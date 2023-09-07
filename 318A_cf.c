#include <stdio.h>
int main ()
{
    long long int n, a;

    scanf("%lld%lld", &n, &a);

    if (n % 2 != 0){

        if (a <= (n/2) + 1) printf("%lld", 2*a - 1);
        else printf("%lld", 2*(a - ((n/2) + 1)));
    }

    else {

        if (a <= (n/2)) printf("%ld", 2*a - 1);
        else printf("%ld", 2*(a - (n/2)));
    }

    return 0;
}
