#include<stdio.h>

int main(){
	int N;
	printf("Nhap so nguyen N : ");
	scanf("%d",&N);
	
	if(N % 3 == 0 && N % 5 == 0){
		printf("\n%d chia het cho 3 va 5",N);
	}else if(N % 3 == 0 ){
		printf("\n%d chia het cho 3",N);
	}else{
		printf("\n%d chia het cho 5 ",N);
	}

	return 0;
}
