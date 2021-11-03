#include<stdio.h>
int main(){
	int n;
	float tbc;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int count = 0;
	float sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			sum += arr[i];
			count++;
		}
	}
	printf("Co so so le trong mang la: %d \n", count);
	tbc = sum/count;
	printf("Trung binh cong cua cac so le la: %f", tbc);
}
