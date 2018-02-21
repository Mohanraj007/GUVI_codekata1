#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,i,sum=1;
	scanf("%d ",&a);
	for(i=a;i>1;i--)
	{
	sum=sum*i;	
	}
	printf("%d",sum);
  return 0;
}
