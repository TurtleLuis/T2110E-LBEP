#include<stdio.h>
int main(){
	//Nhap so tien vao
	int so_tien;
	double tien_lai_1,tien_lai_2,tien_lai_3,tien_lai_4;
	
	printf("Moi nhap so tien cho vao ngan hang tiet kiem ($): ");
	scanf("%d", &so_tien);
	
	//Tinh toan
	if(so_tien > 0){
		tien_lai_1 = so_tien + so_tien*8/100;
		tien_lai_2 = tien_lai_1 + tien_lai_1*8/100;
		tien_lai_3 = tien_lai_2 + tien_lai_2*8/100;
		tien_lai_4 = tien_lai_3 + tien_lai_3*8/100;
		printf("So tien thu duoc sau 4 nam la: %lf $", tien_lai_4);
	}else{
		printf("So tien cho vao khong hop ly!");
	}
}
