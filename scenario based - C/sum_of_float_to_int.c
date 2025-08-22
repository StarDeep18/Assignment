//CH.SC.U4CSE24022
#include <stdio.h>
int main() {
    float num1,num2,sum;
    scanf("%f%f", &num1, &num2);
    num1 = (int)num1;
    num2 = (int)num2;
    sum = num1 + num2;
    printf("%.0f",sum);
    return 1;
}
