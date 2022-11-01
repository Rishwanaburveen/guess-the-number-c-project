#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, no_of_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("WECOME TO THE GAME : GUESS THE NUMBER!! \n ");
    do
    {
        printf("enter the number between 1 to 100: \n");
        scanf("%d", &guess);
        if (guess > number)
            printf("haha!! it is wrong..think the lower number!!");
        else if (guess < number)
            printf("oops!! it is wrong..think the higher number!!");
        else
            printf("hurrahhhhh!!! you got it right in %d guesses", no_of_guesses);
        no_of_guesses++;
    } while (guess != number);

    return 0;
}