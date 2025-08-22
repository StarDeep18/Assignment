//CH.SC.U4CSE24022
#include <stdio.h>
#define PI 3.14
int main()
{
    float rad,area,ci;
    scanf("%f",&rad);
    area = PI*rad*rad;
    ci = 2*PI*rad;
    printf("%.2f\n",area);
    printf("%.2f",ci);
    return 1;
}
