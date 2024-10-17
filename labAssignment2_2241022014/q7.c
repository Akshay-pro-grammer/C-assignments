#include<stdio.h>
int main(){
printf("enter a character\n");
char ch;
scanf("%c",&ch);
int val=(int)ch;
if((val>=97 && val<=123) || (val>=65 && val<=91))
{
printf("The Character is Alphabet\n");
}
else{
printf("not an Alphabet\n");
}
return 0;
}
