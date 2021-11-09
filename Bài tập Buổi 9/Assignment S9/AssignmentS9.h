#include<stdio.h>
#include<math.h>
int TimSoNguyenToTiepTheoCuaN(int n){
	if(n <= 1){
		return 2;
	} else {
		int i = n + 1;
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j != 0){
				continue;
			}
			i++;
			j=1;
		}
		return i;
	}
}

int TinhTongCacChuSoCuaSoNguyenN(int n){
	int phan_du = 0;
	int ketqua = 0;
	for(;n != 0;n /= 10){
		phan_du = n % 10;
		ketqua += phan_du;
	}
	if(ketqua < 0){
		ketqua = -ketqua;
	}
	return ketqua;
}
int NhapBaSoDeKiemTraVaTinhChuVi(int a,int b,int c){
	int flag = 0;
	do{
		flag = 0;
		printf("\b\b\bNhap do dai ba canh cua tam giac de kiem tra va tinh chu vi: \n\t");
		printf("Do dai canh a la: \n\t");
		scanf("%d", &a);
		printf("\tDo dai canh b la: \n\t");
		scanf("%d", &b);
		printf("\tDo dai canh c la: \n\t");
		scanf("%d", &c);
		if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b){
			printf("\tBa so vua nhap thoa man mot tam giac!\n");
			int C = a + b + c;
			return C;	
		} else {
			printf("\tBa so vua nhap khong thoa man mot tam giac!\n");
			flag = 1;
		}	
	} while(flag == 1);
}

float NhapBaSoDeKiemTraVaTinhDienTich(int a,int b,int c){
	int flag = 0;
	do{
		flag = 0;
		printf("\b\b\bNhap do dai ba canh cua tam giac de kiem tra va tinh dien tich: \n\t");
		printf("Do dai canh a la: \n\t");
		scanf("%d", &a);
		printf("\tDo dai canh b la: \n\t");
		scanf("%d", &b);
		printf("\tDo dai canh c la: \n\t");
		scanf("%d", &c);
		if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b){
			printf("\tBa so vua nhap thoa man mot tam giac!\n");
			float P = (float)(a + b + c)/2;
			float S = sqrt(P*(P-a)*(P-b)*(P-c));
			return S;	
		} else {
			printf("\tBa so vua nhap khong thoa man mot tam giac!\n");
			flag = 1;
		}	
	} while(flag == 1);
}

int TimUCLN(int a, int b){
	int UCLN;
	int flag = 0;
	do{
		flag = 0;
		printf("\tNhap so a: \n\t");
		scanf("%d", &a);
		printf("\tNhap so b: \n\t");
		scanf("%d", &b);
		if(a < 0 || b < 0){
			printf("\tSo nhap khong hop le! Moi nhap lai!\n");			
			flag = 1;
			continue;
		}else{
			while(a != b){
				if(a > b){
					a = a - b;
				} else {
					b = b - a;
				}
			}
			if(a == 0){
				UCLN = b;
			}else{
				UCLN = a;
			}
			return UCLN;			
		}
	} while(flag == 1);
}

int TimBCNN(int a, int b){
	int BCNN;
	int flag = 0;
	do{
		flag = 0;
		printf("\tNhap so a: \n\t");
		scanf("%d", &a);
		printf("\tNhap so b: \n\t");
		scanf("%d", &b);
		if(a < 0 || b < 0){
			printf("\tSo nhap khong hop le! Moi nhap lai!\n");
			flag = 1;
			continue;
		} else {
			int max = a;
			int tich = a*b;
			if(max < b){
				max = b;
			}
			for(int i = max; i <= tich; i+=max){
				if(i % a == 0 && i % b == 0){
					BCNN = i;
					break;
				}
			}
			return BCNN;			
		}
	} while(flag == 1);	
}
