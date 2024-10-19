#include<stdio.h>
void count();
void count(){

	int i=0,b=0,s=0,a=0;
	while(i<15){
		printf("Enter your age:");
		int age;
		scanf("%d",&age);
		if(age<=5){
		b++;
		}else if(age<=17){
		s++;
		}else{
		a++;
		}
		i++;
	}
	printf("number of baby , school, and adult respectively %d %d %d\n",b,s,a);


}
int main(void)
{
count();
return 0;
}
