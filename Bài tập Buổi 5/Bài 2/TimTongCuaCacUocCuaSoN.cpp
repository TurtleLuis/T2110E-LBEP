#include<stdio.h>
int main(){
	int n;
	int sum = 0;
	printf("Nhap so n: \n");
	scanf("%d", &n);
	
	printf("Uoc cua so %d la: ", n);
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ,", i);
			sum += i;
		}
	}
	printf("Tong cua cac uoc cua %d la: %d", n, sum);
}
