// kiểm tra số lập phương

#include <stdio.h>
#include <math.h>
int main() {
    long long unsigned n,k;
    scanf("%llu",&n);
    k = (long long unsigned)cbrt(n);
    printf((k*k*k==n)?"Yes":"No");
}