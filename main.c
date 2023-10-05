#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 const int answer = 59;  
    int guess;             
    int attempts = 0;      

    do {
        
        printf("guess a number: ");
        scanf("%d", &guess);

    
        attempts++;

        
        if (guess > answer) {
            printf("high!\n");
        } else if (guess < answer) {
            printf("low!\n");
        } else {
            printf("Congratulation! trials %d",attempts);
        }
    } while (guess != answer);
	
    return 0;
} 
