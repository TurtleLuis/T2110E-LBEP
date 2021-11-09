#include<stdio.h>
#include "AssignmentS9.h"
int main(){
	int n;
	//Nhap so n de tim so nguyen to tiep theo gan n nhat
	printf("Moi nhap so n de tim so nguyen to lon hon va gan nhat voi n: \n\t");
	scanf("%d", &n);
	if(TimSoNguyenToTiepTheoCuaN(n)){
		printf("\tSo nguyen to gan %d nhat la: %d\n", n, TimSoNguyenToTiepTheoCuaN(n));
	}
	printf("------------------------------------------------------------ \n");
	
	//Nhap so nguyen n de tinh tong cac chu  trong so nguyen do
	printf("Moi nhap so n de tinh tong cac chu so trong so n: \n\t");
	scanf("%d", &n);
	printf("\tTong cac chu so trong so nguyen %d la: %d\n", n, TinhTongCacChuSoCuaSoNguyenN(n));
	printf("------------------------------------------------------------ \n");
	
	//Kiem Tra Va Tinh Chu Vi Tam Giac	
	int x,y,z;
	printf("Tinh Chu Vi Tam Giac!\n");
	printf("\tChu vi tam giac la: %d\n",NhapBaSoDeKiemTraVaTinhChuVi(x,y,z));
	printf("------------------------------------------------------------ \n");
	
	//Kiem Tra Va Tinh Dien Tich Tam Giac	
	int x1,y1,z1;
	printf("Tinh Dien Tich Tam Giac!\n");
	printf("\tDien tich tam giac la: %f\n",NhapBaSoDeKiemTraVaTinhDienTich(x1,y1,z1));
	printf("------------------------------------------------------------ \n");
	
	//Tim UCLN
	int a , b;
	printf("Tim Uoc Chung Lon Nhat Cua 2 So!\n");
	printf("\tUCLN cua 2 so la: %d\n", TimUCLN(a,b));
	printf("------------------------------------------------------------ \n");
	
	//Tim BCNN
	int a1, b1;
	printf("Tim Boi Chung Nho Nhat Cua 2 So!\n");
	printf("\tBCNN cua 2 so la: %d\n", TimBCNN(a1,b1));	
	
	return 0;
}
