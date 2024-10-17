#include<stdio.h>
int main(){
int age;
printf("Enter your age");
scanf("%d",&age);
if(age>=18){
 if(age<=50){
 printf("Eligible for our job\n");
 }else{
 printf("Too old for the job\n");
 }
}else{
 printf("Too young for the job\n");
}
return 0;
}
