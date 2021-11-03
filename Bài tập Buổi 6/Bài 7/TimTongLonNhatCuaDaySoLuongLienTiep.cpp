#include<stdio.h>
int main(){
	int n,count,i,j, max, maxsum;
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
	maxsum = 0;
	while(i < n){
		if(arr[i] > 0){
			j = i;
			int sum = 0;
			while(j < n && arr[j] > 0){
				sum += arr[j];
				if(sum >= maxsum){
					maxsum = sum;
				}
				j++;
			}
		}
		i++;
	}
	printf("Tong lon nhat cua day so duong la: %d", maxsum);
}
