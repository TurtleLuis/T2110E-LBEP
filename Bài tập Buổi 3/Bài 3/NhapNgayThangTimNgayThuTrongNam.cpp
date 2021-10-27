#include<stdio.h>
int main(){
	int day, month, year, dayMax;
	
	nhapLaiNgay: 
		printf("Moi nhap ngay: ");
		scanf("%d", &day);	
	
	if(1 <= day && day <= 31){
		printf("Ngay hop le! Moi nhap tiep thang \n");
		goto nhapLaiThang;
	ktt:if(1<= month && month <= 12){
			printf("Thang hop le! Moi nhap tiep nam \n");
			goto nhapLaiNam;
		ktn:if(year>=1958){
				printf("Nam hop le! \n");
				if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
					printf("Nam %d la nam nhuan! \n",year);
					switch(month) {
						case 1:
							dayMax = day;
							break;
						case 3:
							dayMax = day + 31 + 29;
							break;
						case 5:
							dayMax = day + 31*2 + 29 + 30;
							break;
						case 7:
							dayMax = day + 31*3 + 29 + 30*2;
							break;
						case 8:
							dayMax = day + 31*4 + 29 + 30*2;
							break;
						case 10:
							dayMax = day + 31*5 + 29 + 30*3;
							break;
						case 12:
							dayMax = day + 31*6 + 29 + 30*4;
							printf("Thang %d la thang co 31 ngay! \n", month);
							//printf("Ngay ban vua nhap la ngay thu %d \n", dayMax);
							break;
						case 4:
							dayMax = day + 31*2 + 29;
							break;
						case 6:
							dayMax = day + 31*3 + 29 + 30;
							break;
						case 9:
							dayMax = day + 31*5 + 29 + 30*2;
							break;
						case 11:
							dayMax = day + 31*6 + 29 + 30*3;
							printf("Thang %d la thang co 30 ngay! \n", month);
							break;
						case 2: 
							if(day > 29){
								printf("Nam %d khong nhuan nen thang 2 chi co 28 ngay. Moi nhap lai ngay! \n ", year);
								goto nhapLaiNgay;
							}
							dayMax = day + 31;
							printf("Thang %d la thang co 29 ngay! \n", month);
							break;
						default:
							printf("Thang khong hop le!");
							goto nhapLaiThang;
					}
				}else{
					printf("Nam %d la nam khong nhuan! \n",year);
					switch(month) {
						case 1:
							dayMax = day;
							break;
						case 3:
							dayMax = day + 31 + 28;
							break;
						case 5:
							dayMax = day + 31*2 + 28 + 30;
							break;
						case 7:
							dayMax = day + 31*3 + 28 + 30*2;
							break;
						case 8:
							dayMax = day + 31*4 + 28 + 30*2;
							break;
						case 10:
							dayMax = day + 31*5 + 28 + 30*3;
							break;
						case 12:
							dayMax = day + 31*6 + 28 + 30*4;
							printf("Thang %d la thang co 31 ngay! \n", month);
							//printf("Ngay ban vua nhap la ngay thu %d \n", dayMax);
							break;
						case 4:
							dayMax = day + 31*2 + 28;
							break;
						case 6:
							dayMax = day + 31*3 + 28 + 30;
							break;
						case 9:
							dayMax = day + 31*5 + 28 + 30*2;
							break;
						case 11:
							dayMax = day + 31*6 + 28 + 30*3;
							printf("Thang %d la thang co 30 ngay! \n", month);
							break;
						case 2: 
							if(day >28){
								printf("Nam %d khong nhuan nen thang 2 chi co 28 ngay. Moi nhap lai ngay! \n ", year);
								goto nhapLaiNgay;
							}
							dayMax = day + 31;
							printf("Thang %d la thang co 28 ngay! \n", month);
							break;
						default:
							printf("Thang khong hop le!");
							goto nhapLaiThang;
					}
				}
			}else{
				printf("Nhap nam khong hop le! Moi nhap lai! \n");
				goto nhapLaiNam;	
			}
		}else{
			printf("Nhap thang khong hop le! Moi nhap lai! \n");
			goto nhapLaiThang;
		}
	}else{
		printf("Nhap ngay khong hop le! Moi nhap lai! \n");
		goto nhapLaiNgay;
	}
		printf("Ngay %d/%d la ngay thu %d \n",day, month, dayMax);
		goto end;
	nhapLaiThang:
		printf("Moi nhap thang: ");
		scanf("%d", &month);
		goto ktt;
		
	nhapLaiNam:
		printf("Moi nhap nam: ");
		scanf("%d", &year);
		goto ktn;
	end: return 0;
}
