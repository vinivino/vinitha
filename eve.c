#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%2==0&&n!=0)
printf("Even");
else if(n%2!=0&&n!=0)
printf("Odd");
else if(n=0)
printf("Zero");
return 0;
}
