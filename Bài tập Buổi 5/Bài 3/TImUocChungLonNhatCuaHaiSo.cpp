#include<stdio.h>
int main(){
	int a, b, ucln;
	
	printf("Nhap so a: \n");
	scanf("%d", &a);
	
	printf("Nhap so b: \n");
	scanf("%d", &b);
	
	while(a != b){
		if( a > b){
			a = a -b;
		} else {
			b = b - a;
		}
	}
	if(a == 0){
		ucln = b;
	} else {
		ucln = a;
	}
	printf("Uoc chung lon nhat la: %d", ucln);
}
