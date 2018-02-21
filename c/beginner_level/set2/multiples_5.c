#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,i,sum=1;
	scanf("%d ",&a);
	sum=a;
	for(i=1;i<=5;i++)
	{
	printf("%d  ",sum);
	sum=sum+a;
	}
	return 0;
}
