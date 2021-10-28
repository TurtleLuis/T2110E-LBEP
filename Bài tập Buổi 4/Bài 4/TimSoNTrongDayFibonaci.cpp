#include<stdio.h>
int main(){
	int n,i1, i2, i3;
		
	//Gan 2 gia tri dau tien trong day Fibonaci
	i1 = 0;
	i2 = 1;
	//Nhap vi tri n trong day Fibonaci
	nhapLai:  //Label: nhapLai de dung goto thuc hien vong lap quay lai vi tri nay tuy thuoc dieu kien
		printf("Moi nhap vi tri n trong day Fibonaci: ");
		scanf("%d", &n);
	printf("Day Fibonaci la: ");
	printf("%d %d", i1, i2);		//In ra 2 vi tri dau tien la 0 1	
	if(n > 0){		//Kiem tra dieu kien n > 0 hay khong. Neu dung thi
		if(n == 1){		//Neu n = 1 
			printf("\nSo tai vi tri thu %d trong day Fibonaci la: %d", n, i1); //In ra vi tri so 1 voi i1 = 0
		}
		else if(n == 2){		// Neu n = 2
			printf("\nSo tai vi tri thu %d trong day Fibonaci la: %d", n, i2);	//In ra vi tri so 2 voi i2 = 0
		} else {	//Neu n > 2 
			for(int i = 2; i < n; i++){		//Vong lap for chay tai vi tri bien tang la 2. Vi theo vi tri cua so 0 1 1 2... ( la 0 1 2 3 ...). Khong phai la ( 1 2 3 4...)
				i3 = i1 + i2;			//i3 la so xep sau i1 va i2 nen i3 = i1 + i2
				printf(" %d", i3);		//Hien thi ra so i3 ( tai vi tri i = 2 thi i3 la 0 + 1 = 1)
				i1 = i2;				//Gan lai gia tri de day vi tri i1 len. tuc la luc nay i1 = 1
				i2 = i3;				//Gan lai gia tri de day vi tri i2 len. tuc la luc nay i2 = 1 sau do xuong kiem tra dieu kien if
				if(i == n-1){			//Neu dieu kien i = n - 1 dung thi (Do i = 0 tuong duong voi n = 1, i = 1 tuong duong voi n = 2... nen dung dieu kien i = n-1)
					printf("\nSo tai vi tri thu %d trong day Fibonaci la: %d", n, i3); // in ra so tai vi tri n
				}
			}
		}
	}else{
		printf("So n ban vua nhap khong hop le! \n Moi nhap lai!\n");
		goto nhapLai;		//Quay lai vi tri nhap so n
	}	
}
