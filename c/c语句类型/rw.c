#include <stdio.h>
int main(void){
	char ch;
	scanf("%c", &ch);
	printf("%c", ch);
	do{
		scanf("%c",&ch);
	}while (ch != '\n');
	printf("222:::%c", ch);
}
