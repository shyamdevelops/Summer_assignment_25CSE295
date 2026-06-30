//program to Count words in a sentence.
#include <stdio.h>
#include <string.h>
int main(){
char str[200];
int i,words=0;
printf("Enter a sentence: ");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++){
if((i==0&&str[i]!=' '&&str[i]!='\n')||(str[i]!=' '&&str[i]!='\n'&&str[i-1]==' '))
words++;
}
printf("Total words = %d",words);
return 0;
}