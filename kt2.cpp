#include<stdio.h>
 
int timMin(int x[100],int n){
	int min=x[0];
	for(int i=0;i<n;i++){
		if(x[i]<min){
			min=x[i];
		}
	}
	return min;
}

int main(){
	int a[100];
	int n=8;
	printf("nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	printf("phan tu nho nhat trong mang: %d",timMin(a,n));
}
