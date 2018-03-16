#include <stdio.h>

int main(void) {
	int n,m,i,c=0;
	scanf("%d",&n);
	m=n/13;
	for(i=1;i<=m;i++)
	{
		if(n==13*i)
		{
		c++;
		}
	}
	if(c==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
