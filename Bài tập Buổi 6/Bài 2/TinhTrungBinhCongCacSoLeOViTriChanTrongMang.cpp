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
	
	int count = 0, count_1 = 0;
	float sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			count++;
			if(count % 2 == 0){
				sum += arr[i];
				count_1++;
			}
		}
	}
	printf("Co so so le trong mang o vi tri chan la la: %d \n", count_1);
	tbc = sum/count_1;
	printf("Trung binh cong cua cac so le la: %f", tbc);
}
