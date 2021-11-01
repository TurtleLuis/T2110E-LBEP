#include<stdio.h>
int main(){
	int a , b, count;
	
	do{
		printf("Moi nhap so a (a > 1): \n");
		scanf("%d", &a);
		printf("Moi nhap so b (b > a): \n");
		scanf("%d", &b);
	}while(a <= 1 || a >= b);
	printf("Cac so nguyen to >= %d va <= %d la: \n", a, b);
	if(a < b){
		for(int i = a ; i <= b; i++ ){
			count = 1;
			for( int k = 2; k <= i/2 ; k++){
				if(i % k == 0){
					count = 0;
					break;
				}
			}
			if(count){
				printf("%d , ", i);
			}	
		}		
	}
}
