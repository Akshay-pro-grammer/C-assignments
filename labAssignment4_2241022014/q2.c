#include<stdio.h>
int factorial(int n);

int factorial(int n){
int res=1;
for(int i=1;i<=n;i++){
	res=res*i;
}
return res;
}

int main(){
double sum=0;
for(int i=1;i<6;i++){
	sum+= (factorial(i)/i);
}
printf("The sum of the series is: %lf\n",sum);

return 0;
}
