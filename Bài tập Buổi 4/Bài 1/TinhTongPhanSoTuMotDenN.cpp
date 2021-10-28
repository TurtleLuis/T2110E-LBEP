#include<stdio.h>
int main(){
	int n, i;
	double sum;
	//Nhap so n
	moiNhapLai:
		printf("Moi nhap so n: \n");
		scanf("%d", &n); 
	
	sum = 0; 	//Gan gia tri cho sum = 0 ( de tinh tong)
	i = 1; 		//Gan gia tri cho bien dem i = 1
	if( n <= 0){	 //Kiem tra dieu kien n, neu n <= 0
		printf("Nhap so n khong hop le! \n"); 	// Hien thi
		goto moiNhapLai;	//Nhay lenh ve moiNhapLai
	}else{         			 // neu n > 0 thi
		while(i <= n){       //Vong lap neu i <= n thi
			sum += 1/(double)i;        //sum = sum + 1/(float)i; Vi neu i khong chuyen sang dang double thi khi i = 2 thi 1/2 = 0(no lay so nguyen khi)
			i++;        	// tang i them 1 don vi
		}
		printf("Ket qua la: %lf", sum); //Display ra Tong la sum
	}
}
