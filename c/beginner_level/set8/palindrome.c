#include<stdio.h>
int main()
{
int rev=0,t1;
char a;
printf("enter the string:");
scanf("%s",&a);
t1=a;
while(t1!='\0')
{
rev=rev*10;
rev=rev+t1%10;
t1=t1/10;
}
if(a==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
