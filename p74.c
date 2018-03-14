#include<stdio.h>
int main(void){
float a;
int b;
scanf("%f",&a);
if(a<0)
{
	b=(int)(a-0.5);
}
else
{
	b=(int)(a+0.5);
}
printf("%d",b);
	return 0;
}
