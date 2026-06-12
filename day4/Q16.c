//armstrong number in range

#include<stdio.h>
int main()
{
int a,b,n,temp,r,sum;
scanf("%d%d",&a,&b);
for(n=a;n<=b;n++)
{
temp=n;
sum=0;
while(temp>0)
{
r=temp%10;
sum=sum+r*r*r;
temp=temp/10;
}
if(sum==n)
printf("%d ",n);
}
return 0;
}