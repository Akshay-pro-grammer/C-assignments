#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("Enter the Marks of Physics, Chemistry out of 100: ");
scanf("%d %d",&a,&b);
printf("Enter the Marks of Biology , Maths, Computer out of 100: ");
scanf("%d %d %d",&c,&d,&e);
int per=(a+b+c+d+e)/5;
if(per>=90) printf("Grade A\n");
else if(per>=80) printf("Grade B\n");
else if(per>=70) printf("Grade C\n");
else if(per>=60) printf("Grade D\n");
else if(per>=40) printf("Grade E\n");
else printf("Grade F\n");
return 0;
}
