#include<stdio.h>
int main(){
double salary,hra,da,gross;
printf("Enter your basic salary");
scanf("%lf",&salary);
if(salary<=10000){
hra=0.2 * salary;
da=0.8 * salary;
gross=salary+hra+da;
printf("Gross salary: %lf\n",gross);
}
else if(salary>10000 && salary<=20000){
 hra=0.25 * salary;
da=0.9 * salary;
gross=salary+hra+da;
printf("Gross salary: %lf\n",gross);
}
else
{
hra=0.3 * salary;
da=0.95 * salary;
gross=salary+hra+da;
printf("Gross salary: %lf\n",gross);
}
return 0;
}
