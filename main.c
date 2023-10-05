#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if (a>0){
		printf("양수입니다.\n");
		}
	
		else if (a<0) {
			printf("음수입니다.\n");
		}
		else {
			printf("0입니다.\n");
		}
			
	
	return 0;
}
