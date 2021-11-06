#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap mang so nguyen n: ");
		scanf("%d", &n);		
	} while(n <= 0);
	
	int arr[n];
	int flag = 0;
	do{
		for(int i = 0; i < n; i++){
			printf("Moi nhap so thu %d: ", i);
			scanf("%d", &arr[i]);
			if(i == 0){
				continue;
			} else {
				for(int j = i; j > 0 && j <= i ; j--){
					if(arr[j-1] > arr[j]){
						int temp = arr[j];
						arr[j] = arr[j-1];
						arr[j-1] = temp;
					}
				}				
			}
		}
		flag = 0;
	}while(flag == 1);
	printf("Danh sach mang sau khi nhap va duoc sap xep tu be den lon la:\n");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
}
