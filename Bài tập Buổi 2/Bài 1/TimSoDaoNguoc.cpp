#include<stdio.h>
int main(){
	int n, a,b,c,d;
	//nhap so nguyen n
	printf("Moi nhap so nguyen n: \n");
	scanf("%d",&n);
	if(n >= 0){
		if(n < 10000){
			if(n>=1000){
				a = n%10;                      
				n = n/10;
				b = a*10 + (n%10);
				n = n/10;
				c = b*10 + (n%10);
				n = n/10;
				d = c*10 + (n%10);            
				printf("%d",d);
			}else{
				if(n>=100){
					a = n%10;
					n = n/10;
					b = a*10 + (n%10);
					n = n/10;
					c = b*10 + (n%10);
					printf("%d",c);
				}else{
					if(n>=10){
						a = n%10;
						n = n/10;
						b = a*10 + (n%10);
						printf("%d",b);
					}else{
						if(n>=0){
							a = n%10;
							printf("%d",a);
						}
					}
				}
			}
		}else{
			printf("Khong thoa man!");
		}
	}else{
		printf("Khong thoa man!");
	}
}
