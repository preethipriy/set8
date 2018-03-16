#include <stdio.h>

int main(void) {
	int a,b,c,i;
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=0;i<=c;i++)
	{
		if(c==i*i)
		{
			printf("yes");
		}
	}
	
	return 0;
}
