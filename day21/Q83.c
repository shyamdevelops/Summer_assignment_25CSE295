//program to Count vowels and consonants.
#include<stdio.h>
int main(){
char str[100];
int i=0,v=0,c=0;
printf("Enter a string: ");
gets(str);
while(str[i]!='\0'){
if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
v++;
else
c++;
}
i++;
}
printf("Vowels = %d\nConsonants = %d",v,c);
return 0;
}