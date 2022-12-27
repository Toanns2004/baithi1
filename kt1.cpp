#include<stdio.h>
int main(){
	int x[10];
	printf("Enter 10 integers\n");
	for(int i=1;i<=10;i++){
		printf("x[%d]: ",i);
		scanf("%d",&x[i]);
	}
	printf("Display in the reversed order\n");
	for(int i=1;i<=10;i++){
		printf("%d\n",i);
	}
}
