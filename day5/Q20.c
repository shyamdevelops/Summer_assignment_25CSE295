//largest prime factor

#include<stdio.h>
int main(){
int n,i,largest=0,j,prime;
scanf("%d",&n);
for(i=2;i<=n;i++){
if(n%i==0){
prime=1;
for(j=2;j<=i/2;j++){
if(i%j==0){
prime=0;
break;
}
}
if(prime)
largest=i;
}
}
printf("%d",largest);
return 0;
}