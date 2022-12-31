#include <stdio.h>

int main() {
    char c;
    double num1, num2,res;
    scanf("%c %lf%lf",&c,&num1,&num2);
    if (c==*"+") res = num1+num2;
    else if (c==*"-") res = num1-num2;
    else if (c==*"*") res = num1*num2;
    else {
        if (num2==0) {
            printf("Math Error");
            return 0;
        }
        res = num1/num2;
    }
    printf("%.2lf",res);
}