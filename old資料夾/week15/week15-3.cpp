#include <stdio.h>
///49 �N�O�Ʀr'1'
///65 �N�O�j�g'A'
///97 �N�O�p�g'a'
int main()
{
    printf("A���ȬO%d\n", 'A');///�L�X:A���ȬO65
    printf("A���ȬO%d\n", 'B');///�L�X:B���ȬO66
    printf("A���ȬO%d\n", 'C');///�L�X:C���ȬO67
    for(int c= 'A';c<='Z'; c++){///�p��c�O�p�g��
        printf("%c���ȬO%d\n", c, c );
    }
}
