#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int soduong_1 = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			solecuoi = arr[i];
		}
	}
	printf("So le cuoi cung la: %d", solecuoi);
}
