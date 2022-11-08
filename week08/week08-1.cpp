#include <stdio.h>
int main()
{///口訣:倒過來想(稀有的比較好想)
    int n;
    scanf("%d",&n);///想試試n是不是質數
    int bad=0;///一開始還沒有bad壞掉
    for(int i=2;i<n;i++){///只能被1還有n本身整除
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d是質數",n);
    else printf("%d 不好,不是質數",n);///bad
}

