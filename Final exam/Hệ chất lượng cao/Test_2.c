// kiểm tra số chính phương

#include <stdio.h>
#include <math.h>
int main() {
    long long unsigned n,k;
    scanf("%llu",&n);
    k = (long long unsigned)sqrt(n);
    printf((k*k==n)?"Yes":"No");
}