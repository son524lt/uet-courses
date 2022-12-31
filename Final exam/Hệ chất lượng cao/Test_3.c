#include <stdio.h>

struct student {
    char id[9];
    float medScore;
};

int main() {
    int n,maxIndex=0;
    float max=0;
    scanf("%d",&n);
    struct student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %f",&arr[i].id,&arr[i].medScore);
        if (arr[i].medScore>max) {
            max = arr[i].medScore;
            maxIndex = i;
        }
    }
    printf("Sinh vien co diem trung binh cao nhat: %s",arr[maxIndex].id);
}