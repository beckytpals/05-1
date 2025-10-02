#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int answer = 59;
	int trial;
	int guess;
	
	do{
		printf("Guess a number : ");
		scanf("%i", &guess);
		trial++;
		if (guess < answer)
			printf("low!\n");
		else if (guess > answer)
			printf("high!\n");
	}
	while( guess != answer);
	
	printf("congratulation! trials : %i\n", trial);
	
	return 0;
}
