#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n],min=10000,submin=10000,max=-10000,submax=-10000;
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i]<max&&arr[i]>submax) submax=arr[i];
        if (arr[i]>min&&arr[i]<submin) submin=arr[i];
    }
    printf("%d %d",submin,submax);
}