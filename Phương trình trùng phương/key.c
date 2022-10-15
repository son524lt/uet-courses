#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int delta = b*b-4*a*c;
    if (a==0) {
        if (b==0&&b==c) printf("phuong trinh co vo so nghiem");
        else if (b*c>0||b==0) printf("phuong trinh vo nghiem");
        else if (c==0) printf("phuong trinh co 1 nghiem\n0.00000");
        else{printf("phuong trinh co 2 nghiem\n");printf("%.5f %.5f",-sqrt(-c/b),sqrt(-c/b));}
    } else {
        if (delta == 0) 
            if (b<0) printf("phuong trinh co 2 nghiem\n%.5f %.5f",-sqrt(-b/2/a),sqrt(-b/2/a));
            else if (b>0) printf("phuong trinh vo nghiem");
            else printf("phuong trinh co 1 nghiem\n0.00000");
        else if (delta < 0) printf("phuong trinh vo nghiem");
        else {
            if (c==0) {
                if (b>=0) printf("phuong trinh co 1 nghiem\n0.00000");
                else printf("phuong trinh co 3 nghiem\n%.5f 0.00000 %.5f",-sqrt(-b/a),sqrt(-b/a));
            } else if (a*c<0) printf("phuong trinh co 2 nghiem\n%.5f %.5f",-sqrt((-b+sqrt(delta))/2/a),sqrt((-b+sqrt(delta))/2/a));
            else {
                if (a*b<0) printf("phuong trinh co 4 nghiem\n%.5f %.5f %.5f %.5f",-sqrt((-b+sqrt(delta))/2/a),-sqrt((-b-sqrt(delta))/2/a),sqrt((-b-sqrt(delta))/2/a),sqrt((-b+sqrt(delta))/2/a));
                else printf("phuong trinh vo nghiem");
            } 
        }
    }
}
