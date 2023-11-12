#include<stdio.h>
int main(){
    int revenue,profit;
    printf("Nhap doanh thu ban hang cua dai ly\n");
    scanf("%d",&revenue);
    if (revenue>300)
    {
        profit=revenue*20/100;
    } else if (revenue>100)
    {
        profit=revenue*10/100;
    }
    else profit=revenue*5/100;
    
    printf("Loi nhua ban hang cua dai ly la %d",profit);
    
}