#include<stdio.h>
int main(){
	int n;
	do{
		printf("Enter Number Size of Array (Positive Number):");
		scanf("%d", &n);		
	}while(n <= 0);
	
	int arr[n];
	printf("Enter Numbers of Array!\n");

	for(int i = 0; i < n; i++){
		printf("Enter number %d: ", i);
		scanf("%d", &arr[i]);
	}
	//	Kiem tra mang xem co so chan hay khong
	int even_number = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			even_number = arr[i];
		} 
	}
	
	if(even_number != 0){
		printf("The last number is: %d", even_number);
	} else {
		printf("No EVEN number!");
	}
}
