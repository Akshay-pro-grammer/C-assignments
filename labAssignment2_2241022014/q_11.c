#include<stdio.h>
int main(){
int amt;
printf("Enter the amount: ");
scanf("%d",&amt);
int fh_notes,twh_notes,h_notes,f_notes,tw_notes,t_notes;
if(amt>=500)
{
	fh_notes=(int)amt/500;
	printf("The number of 500 notes:%d\n",fh_notes);
	amt=amt-(fh_notes*500);
}
if(amt>=200)
{
	twh_notes=(int)amt/200;
	printf("The number of 200 notes:%d\n",twh_notes);
	amt=amt-(twh_notes*200);
}
if(amt>=100)
{
	h_notes=(int)amt/100;
	printf("The number of 100 notes:%d\n",h_notes);
	amt=amt-(h_notes*100);
}
if(amt>=50)
{
	f_notes=(int)amt/50;
	printf("The number of 50 notes:%d\n",f_notes);
	amt=amt-(f_notes*50);
}
if(amt>=20)
{
tw_notes=(int)amt/20;
	printf("The number of 20 notes:%d\n",tw_notes);
	amt=amt-(tw_notes*20);
}
if(amt>=10)
{
	t_notes=(int)amt/10;
	printf("The number of 10 notes:%d\n",t_notes);
	amt=amt-(t_notes*10);
}
printf("remaining coins: %d\n",amt);
return 0;
}
