#include<stdio.h>
#include<string.h>
int main(void){
char a[20];
int i,n;
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==a[n/2])
{
	a[i]='*';
}
}
printf("%s",a);
	return 0;
}
