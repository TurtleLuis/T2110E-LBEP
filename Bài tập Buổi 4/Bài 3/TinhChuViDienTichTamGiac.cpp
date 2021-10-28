#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
	//label: moiNhapLai
	moiNhapLai:
		printf("Moi nhap so a: \n");
		scanf("%d",&a);
	
		printf("Moi nhap so b: \n");
		scanf("%d",&b);
	
		printf("Moi nhap so c: \n");
		scanf("%d",&c);
	
	if(a > 0 && b > 0 && c > 0){  //Neu a,b,c > 0 
		if(a + b > c && b + c > a && a + c > b){	//Neu a + b > 0 va b + c > 0 va a + c > 0
			int cv = a + b + c;				//Khai bao bien cv
			double p = (double) cv/2;		//Khai bao bien p va ep kieu double de khong print thieu gia tri
			double dt = sqrt(p*(p-a)*(p-b)*(p-c));		//Khai bao bien dt 
			printf("Chu vi tam giac la: %d\n", cv);	
			printf("Dien tich tam giac la: %lf\n", dt);
		} else { //New a,b,c < 0
			printf("Dieu kien de 3 so a,b,c la canh cua 1 tam giac khong hop le! \nMoi nhap lai! \n");
			goto moiNhapLai; 	// Lenh nhay goto se bo qua cac buoc khac de nhay ve label: moiNhapLai va thuc hien tiep
		}
	} else {
		printf("So a,b,c ban nhap khong hop le! \nMoi nhap lai! \n");
		goto moiNhapLai;	// Lenh nhay goto se bo qua cac buoc khac de nhay ve label: moiNhapLai va thuc hien tiep
	}
}
