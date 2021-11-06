#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];
	int flag = 0;
	for(int i = 0; i <n;i++){
		flag = 0;
		do{
			flag = 0;
			printf("Nhap gia tri thu %d : ", i);
			scanf("%d", &arr[i]);
			for(int j = 0; j < i; j++){
				if(arr[j] == arr[i]){
					flag = 1;
					printf("So %d vua nhap da co trong danh sach!\n", arr[i]);
					break;
				}
			}
			if(flag == 0){
				if(arr[i] < 2){
					flag = 1;
				} else {
					for(int j = 2; j <= arr[i]/2 ; j++){
						if(arr[i] % j == 0){
							flag = 1;
							break;
						}
					}
				}
				if(flag == 1){
					printf("So %d khong phai so nguyen to!\n", arr[i]);
				}
			}			
		}while(flag == 1);
	}
	printf("Danh sach mang cac so nguyen to khac nhau sau khi nhap la: \n");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
}
