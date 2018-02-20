#include <stdio.h>
int main(void) {
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("POSITIVE");
		
	}
	else if(a<0)
	{
		printf("NEGATIVE");
	}
	else
	{
		printf("zero");
	}
	return 0;
}
