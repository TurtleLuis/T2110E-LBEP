#include<stdio.h>
int main(){
	int n,count,i,j, max;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	int arr[n];
	
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	i = 0;
	max = 0;
	while(i < n){
		if(arr[i] > 0){
			count = 0;
			j = i;
			while(j < n && arr[j] > 0){
				count++;
				if(count >= max){
					max = count;
					j++;
				} else{
					j++;
					continue;
				}
			}
		}else{
			i++;
			continue;
		}
		i++;
	}

	printf("So luong day so duong dai nhat la: %d\n", max);
	printf("Day co so luong so duong lien tiep dai nhat la: ");
	for(int i = j - max +1 ; i < j; i++ ){
		printf("%d ",arr[i]);
	}
}
