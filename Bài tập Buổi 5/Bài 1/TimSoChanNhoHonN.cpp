#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so n: \n");
	scanf("%d", &n);
	
	printf("So chan nho hon n la: \n");
	for(int i = 0; i < n; ){
		if(i % 2 == 0){
			printf("%d ", i);
		}
		i+=2;
	}
}
