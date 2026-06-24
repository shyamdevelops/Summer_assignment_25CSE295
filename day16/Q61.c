// C program to find the missing number in an array of size n-1 containing numbers from 1 to n

#include<stdio.h>
int main(){
int n,i,sum=0,total,missing;
scanf("%d",&n);
int arr[n-1];
for(i=0;i<n-1;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
total=n*(n+1)/2;
missing=total-sum;
printf("Missing number = %d",missing);
return 0;
}