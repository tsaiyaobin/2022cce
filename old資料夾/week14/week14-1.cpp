///int sum(int a,int b);�ŧi�L���Ϊ�

#include <stdio.h>
int sum(int a,int b);

int main()
{///�b�ϥΤ��e,�n���ŧidefine or �w�qdefine
    int ans=sum(2,3);///�ϥ� �I�s
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///�w�qdefine
{
    return a+b;
}///�^�Ǧ^�ФH�a
