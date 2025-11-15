#include <stdio.h>
int main(void){
	char ch;
	do{
		ch = getchar();
	}while (ch != '\n');
	putchar(ch);
	return 0;

}
