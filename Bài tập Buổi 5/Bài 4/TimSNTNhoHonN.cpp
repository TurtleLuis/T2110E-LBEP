#include<stdio.h>
int main(){
	int n, count;
	
	printf("Moi nhap so n: \n");
	scanf("%d", &n);
	
	printf("Cac SNT nho hon %d la: ", n);
	for(int k = 2; k <= n; k++){
		count = 1;
		for(int i = 2; i <= k/2; i++){
			if(k % i == 0){
				count = 0;
				break;
			}
		}
		if(count == 1 && k < n){
			printf("%d  ", k);
		}
	}
}
