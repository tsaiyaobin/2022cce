#include <stdio.h>
/// 閨年 奧運 4年一次
///如果太陽繞地球公轉一圈365.25天
/// 365 365 365 365+1 2月29天!
/// 但是 365.2419 所以,太多要再扣回來
/// 每一百年要跳開 每400年要再補回

///口訣: 4 100 400(稀有) 倒過來想
int main()
{
    printf("請輸入西元年分: ");

    int n;
    scanf("%d",&n);

    if( n%400==0 ) printf("閨年");///最稀有
    else if( n%100==0 ) printf("普通年/正常年");
    else if( n%4==0 ) printf("閨年");
    else printf("普通年/平年");
}
