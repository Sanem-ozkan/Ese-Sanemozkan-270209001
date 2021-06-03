#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Heal=18;
int enemy=12;
int fight()
{  int N;
  int A =Heal;
  int B=enemy;
  srand(time(NULL));
    N = rand() % 9 + 1;
     while(1)
    {
        sleep(2);
      N = rand() % 9 + 1;
         if (N>=5)
    {
       A=A-3;
       printf("You take 3 damage\n");
    }
    else{
        printf("Missed\n");
    }
    sleep(2);
    N = rand() % 9 + 1;
    if (N>=5)
    {
        B=B-3;
        printf("your enemy take 3 damage\n");

    }
    else{
       printf("Missed\n");
    }
    if(A<=0){

        printf("you died.\n START OVER AGAIN\n-------------------------------------------------------\n");
        A=Heal;
        B=enemy;

    }
    else if(B<=0){
        printf("enemy is dead\n");
        break;
    }

    }
    return 0;
}


























