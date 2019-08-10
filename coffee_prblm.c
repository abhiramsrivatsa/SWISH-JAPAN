#include<stdio.h>
main()
{
int x,p,i,sum;
scanf("%d%d" &x,&p);
sum=x;
while(x>0)
{
sum=x+(x%p);
x=x/p;
}
printf("%d",sum);
}
