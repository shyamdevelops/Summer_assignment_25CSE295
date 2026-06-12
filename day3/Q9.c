//check number is prime or not


#include<stdio.h>
int main()
{
int n,i,c=0;
printf("Enter number: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
printf("Prime Number");
else
printf("Not Prime Number");
return 0;
}