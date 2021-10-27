#include<stdio.h>
int main(){
	int a, b;
	//Nhap 2 so a,b
	printf("Moi nhap so a: ");
	scanf("%d", &a);
	
	printf("Moi nhap so b: ");
	scanf("%d", &b);
	
	if(a >= b){
		if ( b== 0){
			printf("Khong chia duoc cho 0");
		} else{
		float x = (float)a/b;
		printf("Ket qua x = a/b la: %f \n", x);			
		}
	} else{
		int y = a*b;
		printf("Ket qua y = a*b la: %d \n", y);
	}
}
