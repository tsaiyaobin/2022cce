#include <stdio.h>
int main()
{
	int ans=0;
	while(1){
		printf("Enter an integer ( 999 to end ): \n");
		int temp;
		scanf("%d",&temp);
		if(temp==999) break;
		ans+=temp;
	}
	printf("The total is: ");
	printf("%d",ans);
}
