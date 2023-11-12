#include <stdio.h>
int main()
{
    int incomeTax, wages, incomeReal;
    printf("Nhập tổng thu nhập của bạn\n");
    scanf("%d", &wages);
    if (wages > 80)
    {
        incomeTax = wages * 35 / 100;
    }
    else if (wages > 52)
    {
        incomeTax = wages * 30 / 100;
    }
    else if (wages > 32)
    {
        incomeTax = wages * 25 / 100;
    }
    else if (wages > 18)
    {
        incomeTax = wages * 20 / 100;
    }
    else if (wages>10)
    {
        incomeTax=wages*15/100 ;
    }
    else if (wages>5)
    {
        incomeTax=wages*10/100;
    }
    else incomeTax=wages*5/100;
    incomeReal = wages - incomeTax;
    printf("Tiền lương mà nhân viên đó thực sự nhận đc là %d", incomeReal);
}