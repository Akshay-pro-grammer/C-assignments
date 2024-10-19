#include<stdio.h>
int main(){
int count=1;
for(int i=0;i<4;i++){
	for(int j=0;j<i+1;j++){
		printf("%d ",count++);
	}
	printf("\n");
}
return 0;
}
