#include <stdio.h>
int main(void)
{
	int c,b;
	scanf("%d %d",&c,&b);
	c=c-b;
	if(c%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
