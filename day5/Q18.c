//check strong number

#include<stdio.h>
int main(){
int n,temp,r,fact,sum=0,i;
scanf("%d",&n);
temp=n;
while(temp>0){
r=temp%10;
fact=1;
for(i=1;i<=r;i++)
fact*=i;
sum+=fact;
temp/=10;
}
if(sum==n)
printf("Strong Number");
else
printf("Not Strong Number");
return 0;
}