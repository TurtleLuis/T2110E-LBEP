#include <stdio.h>
#include "LabS9.h"
int main(){
	int a, b, n;
	//Kiem tra so nguyen to
	printf("Moi nhap so can kiem tra co phai SNT khong: \n");
	scanf("%d", &a);
	if(KiemTraSoNguyenTo(a)){
		printf("So %d la so nguyen to! \n", a);
	} else {
		printf("So %d khong phai la so nguyen to! \n", a);
	}
	
	//Tim dao nguoc cua mot so
	printf("Moi nhap so nguyen de tim so nghich dao: \n");
	scanf("%d", &b);
	DaoNguocCuaMotSo(b);

	return 0;
}
