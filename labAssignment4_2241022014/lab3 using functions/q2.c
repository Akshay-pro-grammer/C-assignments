#include<stdio.h>
void printAtoZ();
void printAtoZ(){
	int i=65;
	while(i<65+26){
	printf("%c",i);
	i++;
	}
	printf("\n");
}
int main(void)
{
printf("Alphabets are:- ");
printAtoZ();
return 0;
}
