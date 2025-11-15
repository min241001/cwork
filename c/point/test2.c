#include <stdio.h>
int main(void){
	int i,j,*p,*q;
	p=&i;
	q=p;
	printf("%d\n",*q);
	*p = 1;
	*q = 2;
	printf("p:%d\n",*p);
	printf("q:%d\n",*q);
}
