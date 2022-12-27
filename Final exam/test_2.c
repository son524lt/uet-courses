#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n],duplicate;
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n-2; i++) {
        if (arr[i]==arr[i+1]||arr[i]==arr[i+2]) {
            duplicate = arr[i];
            break;
        }
        if (arr[i+1]==arr[i+2]) {
            duplicate=arr[i+1];
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i]!=duplicate) {
            printf("%d",arr[i]);
            break;
        }
    }
}