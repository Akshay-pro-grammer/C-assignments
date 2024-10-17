#include<stdio.h>
int main(){
printf("enter year to check\n");
int y;
scanf("%d",&y);
if(y%400==0 || (y%4==0 && y%100!=0))
{
printf("%d is a leap year\n",y);
}
else{
printf("not a leap year\n");
}
return 0;
}
