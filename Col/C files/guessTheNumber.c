//AIM : A number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

		int num,guess,guesses=0;
		srand(time(0));
		num = (rand()%100)+1;
	    printf("Guess the Number\nGuess: ");
		do{
			scanf("%d",&guess);
			if(guess>num) printf("Too High! ");
			else if(guess<num) printf("Too Low! ");
			else printf("Ding! Ding! Ding!\nCorrect Answer\n");
			guesses+=1;
		}while(guess!=num);
		printf("It took you %d tries to guess the answer\n",guesses);

	return 0;
}
