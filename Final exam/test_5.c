// thêm include stdlib.h nếu chưa có

int* addTime(char *time1, char *time2) {
    int h1 = ((time1[0]-*"0")*10+time1[1]-*"0");
    int h2 = ((time2[0]-*"0")*10+time2[1]-*"0");
    int m1 = ((time1[3]-*"0")*10+time1[4]-*"0");
    int m2 = ((time2[3]-*"0")*10+time2[4]-*"0");
    int s1 = ((time1[6]-*"0")*10+time1[7]-*"0");
    int s2 = ((time2[6]-*"0")*10+time2[7]-*"0");
    s1+=s2;
    if (s1>=60) {
        s1-=60;
        m1++;
    }
    m1+=m2;
    if (m1>=60) {
        m1-=60;
        h1++;
    }
    h1+=h2;
    int* a = (int*)malloc(sizeof(int)*3);
    a[0]=h1;
    a[1]=m1;
    a[2]=s1;
    return a;
}