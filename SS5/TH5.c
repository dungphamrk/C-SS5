#include <stdio.h>
int main()
{
    int month, day;
    printf("Nhập vào tháng sinh\n");
    scanf("%d", &month);
    printf("Nhập vào ngày sinh\n");
    scanf("%d", &day);
    switch (month)
    {
    case 1:
        if (1 <= day || day <= 19)
        {
            printf("Cung Ma Kết");
        }
        else if (day <= 31)
        {
            printf("Cung Bảo Bình");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 2:
        if (1 <= day || day <= 18)
        {
            printf("Cung Bảo Bình");
        }
        else if (day <= 29)
        {
            printf("Cung Song Ngư");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");

        break;
    case 3:
        if (1 <= day || day <= 20)
        {
            printf("Cung Song Ngư");
        }
        else if (day <= 31)
        {
            printf("Cung Bạch Dương");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");

        break;
    case 4:
        if (1 <= day || day <= 20)
        {
            printf("Cung Bạch Dương");
        }
        else if (day <= 30)
        {
            printf("Cung Kim Ngưu");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");

        break;
    case 5:
        if (1 <= day || day <= 20)
        {
            printf("Cung Kim Ngưu");
        }
        else if (day <= 31)
        {
            printf("Cung Song Tử");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 6:
        if (1 <= day || day <= 21)
        {
            printf("Cung Song Tử");
        }
        else if (day <= 30)
        {
            printf("Cung Cự Giải");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;

    case 7:
        if (1 <= day || day <= 22)
        {
            printf("Cung Cự Giải");
        }
        else if (day <= 31)
        {
            printf("Cung Sư Tử");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 8:
        if (1 <= day || day <= 22)
        {
            printf("Cung Sư Tử");
        }
        else if (day <= 31)
        {
            printf("Cung Xử Nữ");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 9:
        if (1 <= day || day <= 22)
        {
            printf("Cung Xử Nữ");
        }
        else if (day <= 30)
        {
            printf("Cung Thiên Bình");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 10:
        if (1 <= day || day <= 23)
        {
            printf("Cung Thiên Bình");
        }
        else if (day <= 31)
        {
            printf("Cung Bọ Cạp");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 11:
        if (1 <= day || day <= 22)
        {
            printf("Cung Bọ Cạp");
        }
        else if (day <= 30)
        {
            printf("Cung Nhân Mã");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    case 12:
        if (1 <= day || day <= 21)
        {
            printf("Cung Nhân Mã");
        }
        else if (day <= 31)
        {
            printf("Cung Ma Kết");
        }
        else
            printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    default:
        printf("Dữ liệu nhập vào ko hợp lệ");
        break;
    }
}