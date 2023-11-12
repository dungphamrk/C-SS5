#include<stdio.h>
int main(){
    int phoneFee=25000,time;
    printf("Nhap vao so phut su dung dien thoai\n");
    scanf("%d",&time);
    if (time>400)
    {
        phoneFee= phoneFee + 50*600+150*400+200*200+(time-400)*100;
    } else if (time>200)
    {
        phoneFee=phoneFee + 50*600+150*400+(time-200)*200;
    }else if (time>50)
    {
        phoneFee= phoneFee + 50*600+(time-50)*400;
    }else phoneFee= time*600 +phoneFee;
    printf("So tien ma ho gia dinh do phai tra la %d",phoneFee);

}