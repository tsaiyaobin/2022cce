#include <stdio.h>
int f[10];///在外面宣告的變數,會幫你把它初始值都0
int main()
{
    int a;
    int b=10;
    int c[10];
    int d[10]={1,2,3,4,5,6,7,8,9,10};
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    for(int i=0;i<10;i++){
        printf("%d ",f[i]);
    }
}
