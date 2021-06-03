#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fbfbe()
{
int HEAL=30;
int ENEMY=30;
 int Ne;
  int C=HEAL;
  int D=ENEMY;
  srand(time(NULL));
    Ne = rand() % 20 + 1;
     while(1)
    {
      Ne = rand() % 20 + 1;
         if (Ne<=12)
    { printf("God roared and started throwing hot tail fat particles on you\n");
       C=C-3;
       printf("\n You take 3 damage\n");
       sleep(2);
    }
    else if (12<Ne&& Ne<=17)     {
        printf("The goddess rose from the ground, raised her hands, and began to rain hot tomato sauce from the sky, shouting 'For the power of the Acýlý Adana\n");
        C=C-6;
        printf("\n You take 6 damage\n");
        sleep(2);
    }
    else if(Ne>17&& Ne<=20)
    {
      printf("The goddess flapped her hair and kebab skewers sticking out of her hair stuck all over your body \n");
        C=C-8;
       printf("\n you took 8 damage\n");
       sleep(2);

    }
    Ne = rand() % 9 + 1;
    if (Ne<=8)
    {   printf("You played the trumpet and a huge box of buttermilk flying from the sky is poured onto the goddess\n");
        D=D-5;
        printf("\n your enemy took 5 damage\n");

    }
    else if(8<Ne && Ne>=14) {
       printf("You attack the goddess with your döner knives\n");
       D=D-6;
       printf("\n your enemy took 6 damage\n");
       sleep(2);
    }
    else if(Ne>14&& Ne<=20)
    {
        printf("You look at the goddess, you clasp your hands with an evil grin on your face, and the light that comes out of them hits the goddess directly. When the light is scattered, the goddess turns into a çeyrek adana, albeit for a short time.\n");
        D=D-9;
        printf("\n your enemy take 9 damage\n");
        sleep(2);

    }
    if(C<=0){

        printf("You are divinely defeated by the acýlý adana. The goddess's laughter is ringing in the temple.\n AAT: You, human, think you can beat me? I will make you pay heavily for this heedlessness of yours.\nYou walk out in front of her shop and you read the sign again in disgust 'WELCOME TO THE BEST ADDRESS OF VEGAN DÖNER'.You never thought she'd be so creative when the goddess said I'll make you pay. The smell of many vegetables comes from inside. Now you have to endure this torture all your life.\n.");
    break;

    }
    else if(D<=0){
        printf("You are the winner of the war. You are looking at the painful adana goddess lying on the ground.\n You absorb all your strength with ruthless eyes.\n Now you are the producer of the acýlý adana.\n When you appears before the vegan god, he asks you what you want.\n You express with a dirty grin that you want to be the only kebab restaurant in the world.\n He gladly accepts. After that, the layout will be very different. A group of poor geniuses who still want to stay a kebab restaurant is trying to do something by stacking tomatoes. The only kebab with meat is in your hands. You are celebrating your victory while sitting in the big kebab restaurant.\n");
        break;
    }

    }
    return 0;
}



















