#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//Removed unnecessary if (num != user) check: The while loop itself ensures repeated attempts until the number is guessed correctly.
// Removed misplaced break statements: Hints ("Too high!" or "Too low!") are displayed without exiting the loop prematurely.
int main()
{
    int num, user;
    int no_of_guesses=0;
    srand(time(0));
    num = rand() % 10 + 1;
    // printf("%d",num);
    printf("guess the number");
    do{
    
    no_of_guesses++;
    scanf("%d", &user);
    if(user==num){
        printf("coreect\n");
    }
    else if (user>num)
    {
        printf("go lower");
    }
    else if (user<num)
    {
        printf("go higher");
    }
    
    
    } while (user!=num);
    
     printf("\nyou guessed the number in %d guesses",no_of_guesses);
     return 0;
}