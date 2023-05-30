#include <stdio.h>
#include <string.h>
int main()
{
	char line[200];
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		printf("%c",line[i]);
		if((N-i-1)%3==0 && (N-i-1)!=0) printf(",");
	}
}
