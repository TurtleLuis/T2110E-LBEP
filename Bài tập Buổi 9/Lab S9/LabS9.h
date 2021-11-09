#include <stdio.h>
bool KiemTraSoNguyenTo(int a){
	if(a <= 1){
		return false;
	} else if ( a == 2){
		return true;
	} else {
		int count = 0;
		for(int i = 2; i <= a/2; i++){
			if(a % i == 0){
				count = 1;
				break;
			}
		}
		if(count == 0){
			return true;
		} else {
			return false;
		}		
	}
}

int DaoNguocCuaMotSo(int a){
	int so_du = 0;
	while(a > 0){
		int phan_du;
		phan_du = a%10;
		so_du = so_du*10 + phan_du;
		a = a/10;
	}	
	printf("So nghich dao la: %d\n", so_du);
}

