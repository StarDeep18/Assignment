//CH.SC.U4CSE24022
#include <stdio.h>
int main() {
    float basic,hra,da,sal;
    scanf("%f",&basic);
    hra = 0.80 * basic;
    da = 0.40 * basic;
    sal = basic + hra + da;
    printf("%.2f",sal);
    return 1;
}
