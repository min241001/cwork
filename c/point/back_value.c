#include <stdio.h>
int *max(int *a, int *b);
int main(void){
	int *p, i, j;
	i=10,j=20;
	p = max(&i,&j);
	printf("%d\n",*p);
}

int *max(int *a, int *b){
	if(*a> *b)
		return a;
	else
		return b;
}
