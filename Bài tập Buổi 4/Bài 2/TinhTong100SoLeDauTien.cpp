#include<stdio.h>
int main(){
	int i, sum, count;
	
	printf("Tinh tong 100 so le dau tien > 0! \n");
	sum = 0;    //Gan gia tri cho bien tinh tong sum = 0
	count = 0;  //Gan gia chi cho bien dem count = 0
	i = 0;		//Gan gia cho bien tang i = 0
	while(count < 100){  	// Vong lap while xay ra khi bien dem count < 100. Neu count >= 100 se ket thuc vong lap
		if(i % 2 == 0) {  	// New i % 2 == 0
			i++;			// Tang bien dem i len 1 don vi va quay tro lai vong lap while
		}else{				// New i % 2 != 0
			sum += i;		// Tong sum = sum + i; 
			count++;		// Tang bien dem len 1 don vi
			i++;			// Tang bien tang i len 1 don vi va quay tro lai  vong lap while de kiem tra dieu kien count co = 100 khong
		}
	}
	printf("Ket qua la: %d", sum);	//In ra ket qua
}
