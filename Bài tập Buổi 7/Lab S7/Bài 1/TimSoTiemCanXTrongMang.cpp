#include<stdio.h>
int main(){
	int n,x;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Moi nhap so x: ");
	scanf("%d",&x);
	int sotiemcan,flag = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] <= x){
			sotiemcan = arr[i];
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("Khong tim thay so tiem can duoi %d!", x);
	} else {
		for(int i = 0; i < n; i++){
			if(sotiemcan > arr[i] && sotiemcan <= x){
				break;
			} else if(sotiemcan < arr[i] && arr[i] < x){
				sotiemcan = arr[i];
			}
		}
		printf("So tiem can duoi %d la: %d", x, sotiemcan);	
	}
}
