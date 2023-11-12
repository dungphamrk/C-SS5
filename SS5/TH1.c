#include <stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    printf("Nhập các hệ số a,b,c lần lượt\n");
    scanf("%f%f%f", &a, &b, &c);
    float x1, x2;
    float delta = b * b - 4 * a * c;
    if (delta< 0)
    {
        printf("phuong trinh vo nghiem");
        return 0;
    }
    else if (delta== 0)
    {
        x1 = x2 = -b / 2 / a;
        printf("Phuong trinh co 2 nghiem kep la %.2f", x1);
        return 0;
    }
    else
    {
        x1=(-b+sqrt(delta))/2/a;
        x2=(-b-sqrt(delta))/2/a;
        printf("Phuong trinh co 2 nghiem lan luot là x1=%.2f va x2=%.2f",x1,x2);
    }
}