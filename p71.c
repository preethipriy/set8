#include<stdio.h>

int main(void){
	char a[20];
	int n,i,c=0;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[n-i-1])
		{
			c++;
		}
	}
	if(c==n)
	{
		printf("palindrome");
	}
	else
	{
		printf("notpalindrome");
	}
	return 0;
}
