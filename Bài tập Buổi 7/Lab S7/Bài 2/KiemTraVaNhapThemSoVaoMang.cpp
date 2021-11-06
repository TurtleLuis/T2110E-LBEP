#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];
	int flag = 0;
	for(int i = 0; i <n;){
		flag = 0;
		printf("Nhap gia tri thu %d : ", i);
		scanf("%d", &arr[i]);
		for(int j = 0; j < i; j++){
			if(arr[j] == arr[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			i++;
		}
	}		
}
