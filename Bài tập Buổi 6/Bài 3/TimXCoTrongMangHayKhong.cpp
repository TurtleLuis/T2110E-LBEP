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
	
	int x;
	printf("Moi nhap so x:");
	scanf("%d", &x);
	
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			count++;
		}
	}
	if(count == 0){
		printf("Khong co so %d trong mang!", x);
	} else{
		printf("Co so %d trong mang!", x);
	}
}
