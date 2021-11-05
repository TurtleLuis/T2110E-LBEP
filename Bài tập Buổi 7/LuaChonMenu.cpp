#include<stdio.h>
/* Chuong trinh chon:
	1. Mon an
	2. Do uong
	3. Thanh Toan
	4. Thoat chuong trinh */
int main(){
	int n, x; 
	int sl, soluongcomga, soluongmi, soluongbun, soluongtwister, soluongcoca, soluong7up, tongsotien;
	int tiencomga, tienmi, tienbun, tientwister, tiencoca, tien7up;
	int comga = 35000, mi = 40000, bun = 20000, twister = 8000, coca = 10000, sUp= 7000;
	int flag = 0;
	do{
		printf("Menu gom co: \n");
		printf("1. Mon an\n2. Do uong\n3.Thanh toan\n4.Thoat chuong trinh\n");
		do{
			printf("Moi ban chon so!\n");
			scanf("%d", &n);
		} while(n >= 5 || n<1);
	
		if(n == 1){
			do{
				printf("Moi chon mon an!\n1. Com ga\n2. Mi\n3. Bun\n4.Quay lai\n");
				scanf("%d", &x);
				switch(x){
					case 1:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon Com Ga!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluongcomga += sl;
								printf("So luong Com Ga la: %d\n", soluongcomga);
								tiencomga = comga*soluongcomga;
								printf("Tien com ga la: %d\n", tiencomga);
							} 
							flag = 1;
						} while(flag == 0);						
						break;
					case 2:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon Mi!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluongmi += sl;
								printf("So luong Mi la: %d\n", soluongmi);
								tienmi = mi*soluongmi;
								printf("Tien Mi la: %d\n", tienmi);
							} 
							flag = 1;
						} while(flag == 0);						
						break;															
					case 3:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon Bun!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluongbun += sl;
								printf("So luong Bun la: %d\n", soluongbun);
								tienbun = bun*soluongbun;
								printf("Tien Bun la: %d\n", tienbun);
							}
							flag = 1;
						} while(flag == 0);						
						break;					
					case 4:
					default:
						flag = 1;
						break;
				}								
			} while(flag == 0);
			flag = 0;
		}
		else if(n == 2){
			do{
				printf("Moi chon mon an!\n1. Twister\n2. CocaCola\n3. SevenUp\n4.Quay lai\n");
				scanf("%d", &x);
				switch(x){
					case 1:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon Twister!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluongtwister += sl;
								printf("So luong Twister la: %d\n", soluongtwister);
								tientwister = twister*soluongtwister;
								printf("Tien Twister la: %d\n", tientwister);
							}
							flag = 1;
						} while(flag == 0);						
						break;					
					case 2:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon CocaCola!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluongcoca += sl;
								printf("So luong CocaCola la: %d\n", soluongcoca);
								tiencoca = coca*soluongcoca;
								printf("Tien Coca la: %d\n", tiencoca);							
							} 
							flag = 1;
						} while(flag == 0);						
						break;					
					case 3:
						flag = 0;
						printf("Xin Cam On Quy Khach Da Lua Chon SevenUp!\n");
						do{
							printf("Moi nhap so luong!\n");
							scanf("%d", &sl);
							if(sl <= 0){
								break;
							} else {
								soluong7up += sl;
								printf("So luong Seven Up la: %d\n", soluong7up);
								tien7up = sUp*soluong7up;
								printf("Tien Seven Up la: %d\n", tien7up);							
							} 
							flag = 1;
						} while(flag == 0);						
						break;					
					case 4:
					default:
						flag = 1;
						break;
				}								
			} while(flag == 0);
			flag = 0;
		}
		else if(n == 3){
			tongsotien = tiencomga + tienbun + tientwister + tiencoca;
			printf("So Tien Quy Khach Phai Tra La (VND): %d\n", tongsotien);
			flag = 1;
		}				
		else if(n == 4){
			if(sl > 0){
				tongsotien = tiencomga + tienbun + tientwister + tiencoca;
				printf("So Tien Quy Khach Phai Tra La (VND): %d\n", tongsotien);
				flag = 1;		
			}
		}				
	}while(flag == 0);
}
