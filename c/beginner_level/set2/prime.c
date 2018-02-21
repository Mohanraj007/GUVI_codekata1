#include <stdio.h>
int main(void)
{
	int a,b,r,sum=0;
  scanf("%d ",&a);
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		sum++;
	}
	if(sum>1)
	printf("no");
	else
	printf("yes");
  }
