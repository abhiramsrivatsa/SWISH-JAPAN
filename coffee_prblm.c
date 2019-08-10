#include<stdio.h>
main()
{
int x,p,i,sum;
scanf("%d%d",&x,&p);
sum=x;
while(x>0)
{
sum=sum+(x*(100-p)/100);
x=(x*(100-p))/100;
}
printf("%d",sum);
}
