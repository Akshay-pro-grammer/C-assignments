#include<stdio.h>
int main(){
printf("enter a character\n");
char ch;
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
printf("The Character is vowel\n");
}
else{
printf("not a vowel\n");
}
return 0;
}
