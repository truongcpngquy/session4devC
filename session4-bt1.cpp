#include<stdio.h>

int main(){
	int N;
	printf("Nhap so N : ");
	scanf("%d",&N);
	
	if(N>0){
		printf("\n%d la so duong",N);
	}else{
		printf("\n%d la so am",N);
	}
	return 0;
}
