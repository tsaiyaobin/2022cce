///��W�g��week03-5.cpp�ŶK�U��,�ڭ̽m�߱ƪ�ColdBlocks�k��,Format AStyle
///���ܦh�رƪk,����week04-2���ոլ�
///Setting-Edior,����ĤC��Source Formatter
///Allmen (ANST),�w�]���ƪ��k,�j�A���b�U��,�M��
///K&R (C���o��,�g�o��,Hello World�X�B) �j�A���b�k��,�٤U�ܦh��
///Stroustrup �O C++ ������ (�o����)
///Linux ��,�Ů�O8��
#include <stdio.h>

int main()
{

    for(int n=1; n<2000; n++) {
        if(n%8==6 && n%9==7 && n%15==13) {
            printf("\n�{�bn: %d\n",n);
            printf("��8���l%d\n",n%8);
            printf("��9���l%d\n",n%9);
            printf("��15���l%d\n",n%15);
        }
    }
}
