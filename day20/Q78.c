//program to Check symmetric matrix.
#include<stdio.h>
int main(){
int n,i,j,a[10][10],flag=1;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i][j]!=a[j][i])
flag=0;
if(flag)
printf("Symmetric Matrix");
else
printf("Not Symmetric Matrix");
return 0;
}