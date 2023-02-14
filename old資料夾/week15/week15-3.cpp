#include <stdio.h>
///49 就是數字'1'
///65 就是大寫'A'
///97 就是小寫'a'
int main()
{
    printf("A的值是%d\n", 'A');///印出:A的值是65
    printf("A的值是%d\n", 'B');///印出:B的值是66
    printf("A的值是%d\n", 'C');///印出:C的值是67
    for(int c= 'A';c<='Z'; c++){///小心c是小寫的
        printf("%c的值是%d\n", c, c );
    }
}
