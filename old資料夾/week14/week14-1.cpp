///int sum(int a,int b);宣告他的形狀

#include <stdio.h>
int sum(int a,int b);

int main()
{///在使用之前,要先宣告define or 定義define
    int ans=sum(2,3);///使用 呼叫
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///定義define
{
    return a+b;
}///回傳回覆人家
