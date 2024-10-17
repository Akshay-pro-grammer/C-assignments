#include<stdio.h>
int main(void)
{
printf("enter the character to know the ascii value of: ");
char ch;
scanf("%c",&ch);
int val=ch;
printf("the ascii value of %c is %d\n",ch,val);
return 0;
}
