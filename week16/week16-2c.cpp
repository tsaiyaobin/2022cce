#include <stdio.h>
int main()
{
	int a,b,min,ans=0;
	scanf("%d%d",&a,&b);
	printf("Enter two integers: \n");
	if(a>b) min=b;
	else min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
