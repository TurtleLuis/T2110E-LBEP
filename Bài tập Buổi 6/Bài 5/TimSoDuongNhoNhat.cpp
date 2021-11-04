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
	
	int soduong_min = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			soduong_min = arr[i];
			break;
	}
	if(soduong_min == 0){
		printf("Khong co so duong nao!");
	} else{
		for(int i = 0; i < n; i++){
			if(arr[i] > 0 && arr[i] < soduong_min){
				soduong_min = arr[i];
			}
		}
	}
	printf("So le cuoi cung la: %d", soduong_min);
}
