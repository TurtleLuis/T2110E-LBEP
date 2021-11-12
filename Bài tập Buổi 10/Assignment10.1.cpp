#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	printf("Moi nhap vao chuoi ky tu: \n");
	scanf("%s",s);
	int count=0;
	for(int i=0;i<strlen(s);i++){
		if(65<=s[i]&&90>=s[i])
		s[i]+=32;
		switch(s[i]){
			case 97:
			case 101:
			case 111:
			case 117:
			case 105:
			 count++;
			 break;
		}
	}
	int phuam=strlen(s)-count;
	printf("So phu am co trong chuoi ky tu la:%d\n",phuam);
	printf("So nguyen am co trong chuoi ky tu la:%d\n",count);
}
