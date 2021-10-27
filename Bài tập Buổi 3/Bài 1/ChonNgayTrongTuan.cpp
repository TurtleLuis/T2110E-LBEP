#include<stdio.h>

int main(){
	//Nhap vao thu trong tuan
	int n;
	printf("Moi nhap so de chon ngay trong tuan: ");
	scanf("%d",&n);
	
	switch(n){
		case 2:
			printf("Ban chon ngay thu hai");
			break;
		case 3:
			printf("Ban chon ngay thu ba");	
			break;
		case 4:
			printf("Ban chon ngay thu tu");
			break;
		case 5:
			printf("Ban chon ngay thu nam");
			break;
		case 6:
			printf("Ban chon ngay thu sau");
			break;
		case 7:
			printf("Ban chon ngay thu bay");
			break;
		case 8:
			printf("Ban chon ngay chu nhat");
			break;
		default:
			printf("Khong phai ngay trong tuan!");
			break;
	}
	return 0;	
}
