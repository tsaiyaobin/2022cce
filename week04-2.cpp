///把上週的week03-5.cpp剪貼下來,我們練習排版ColdBlocks右鍵,Format AStyle
///有很多種排法,今天week04-2都試試看
///Setting-Edior,左邊第七個Source Formatter
///Allmen (ANST),預設的排版法,大括號在下面,清楚
///K&R (C的發者,寫得書,Hello World出處) 大括號在右邊,省下很多行
///Stroustrup 是 C++ 的爸爸 (發明者)
///Linux 的,空格是8格
#include <stdio.h>

int main()
{

    for(int n=1; n<2000; n++) {
        if(n%8==6 && n%9==7 && n%15==13) {
            printf("\n現在n: %d\n",n);
            printf("用8除餘%d\n",n%8);
            printf("用9除餘%d\n",n%9);
            printf("用15除餘%d\n",n%15);
        }
    }
}
