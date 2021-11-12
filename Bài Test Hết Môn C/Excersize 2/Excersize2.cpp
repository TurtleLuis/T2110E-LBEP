#include<stdio.h>

double average(int s[], int n){
	int sum = 0;
	double average;
	
	for(int i = 0; i < n; i++){
		sum += s[i];
	}
	
	//Average
	average = (double)sum/n;	
	return average;
}

int main(){
	int n;
	do{
		printf("Enter Size of Array (Positive Number): ");
		scanf("%d", &n);
	} while(n <= 0);

	int arr[n];
	
	for(int i = 0; i < n; i++){
		printf("Enter number %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Average of Elements of Array is: %lf", average(arr,n));
}
