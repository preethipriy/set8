#include <stdio.h>

int main(void) {
	int i,a=0,rem,n,c;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		a=a*10+rem;
		n=n/10;
	}
	while(a!=0)
	{
		c=a%10;
		if(c%2==1)
		{
			printf("%d",c);
		}
		else
		{
			printf(" ");
		}
		a=a/10;
	}
	return 0;
}
