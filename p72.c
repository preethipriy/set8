#include<stdio.h>

int main(void){
	char a[20];
	int n,i,c=0;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			c++;
		}
	}
	if(c>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
