#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
    int count= 0;


    printf("input a string : ");
    
    gets(str);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            count++; 
        }
        i++;
    }

    printf("the number of digits is %d .\n", count);
    return 0;
}
