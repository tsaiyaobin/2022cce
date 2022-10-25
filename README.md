# 2022cce
## week06-1:利用兩層迴圈畫星星,口訣:「左手i、右手j」
```cpp
#include <stdio.h>
int main()
{
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("i:%d星星\n",i);
    }
}
```
## week06-2:畫出等腰三角形,口訣:「左手i、右手j」,利用 for(int k=0; k<star; k++) 的迴圈, 來畫出星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i,star=2*i-1;
        for(int k=0;k<space;k++) printf(" ");
        for(int k=0;k<star;k++) printf("*");
        printf("\n");
    }
}
```
## week06-3:暴力解法,把全部皫數字都試看看能不能整除、能不能約分,如果可以兩個都整除 if(a%i==0 && b%i==0) 就有答案
```cpp
int main()
{
    printf("請輸入2個整數,要約分:");
    int a,b;
    scanf("%d %d",&a,&b);

    int ans;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    printf("ans: %d 可約分",ans);
}
```
## week06-4:口訣老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b:%d",b);
}
```
## week06-4:口訣老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b:%d",b);
}
```
## week07-1:long long int 可以裝比較長的整數
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來%d\n",n);

    long long int a=9876543210;
    printf("long long int 印出來%lld\n", a);
}

```
## week07-2:週的最大公因數, 改用 long long int 計算
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans = i;
    }
    printf("最大公因數是:%lld",ans);
}


```
## week07-3:上週教的輾轉相除法 現在改用 long long int 計算
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}


```
## week07-4:會「10進位轉2進位」之前,需要學習一種「剝皮」的技巧,從高位數來剝, 但程式碼有點亂/不一致,從個位數來剝, 把 123456789 分別剝出 
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf(":%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

}

```
