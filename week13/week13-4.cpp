#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);

	int ans=0;
	while(m>0){
		ans=ans*10+m%10;
		m=m/10;
	}
	printf("%d\n",ans);
}
