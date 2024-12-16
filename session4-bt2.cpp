#include<stdio.h>

int main(){
	int N;
	printf("Nhap so N : ");
	scanf("%d",&N);
	
	if(N%2==0){
		printf("\n%d la so chan",N);
	}else{
		printf("\n%d la so le",N);
	}
	return 0;
}
