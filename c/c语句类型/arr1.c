#include <stdio.h>
int sum_array(int a[], int n);
int main(void){
	int b[] = {1,2,3,4,5};
	int total = sum_array(b,5);
	printf("sum:%d\n",total);
}
int sum_array(int a[], int n){
	int sum=0;
	for(int i=0; i<n;i++){
		sum += a[i];
	}
	return sum;
}
