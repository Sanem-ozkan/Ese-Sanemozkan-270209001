#include <stdio.h>
#ifndef BE_C
#define BE_C
#include<stdlib.h>

int be()
{
   printf("MDL gave you a vague glance.\n MDL: Are you sure? So, isn't it a little wrong choice, to the besid ...\n You: If you think it's the wrong choice, you can still turn to tablecloths right there.\n MDL: You know what it takes right? I warn you that you will never get out of its influence once you deal with the vegan god.\n You: Just because you can't control it doesn't mean the forces are heavy. I'm determined to create my own recipe\n MDL: I shouldn't have given a person such a big responsibility anyway.\n");
    printf("she turned around and moved slowly toward the table cloths with the tail down.\n");
    printf("You proceeded through the part of the forest that is getting more difficult. After a while, you came across 3 road junctions.\n");
    int rid();
    printf("You also know that this is the forest of the lies so all notes are lying.Which path do you want to take? \n 1=Left\n 2=middle\n 3=right\n");
    int rddl;
    scanf("%d",&rddl);
    system("cls");
    switch(rddl)
    {
    case 1:
        {
          printf("you started walking on the  left with confidence but as time pass your confidence started getting lower and lower eventually you understood that you've got lost forever\n");
          printf("----------------------------------------------------------");
          return be();
            break;
        }
    case 2:
        {
            printf("you started walking in a middle way. While you were walking, the air started getting colder. The road seemed infinity. And when you looked at your back you saw that the road has changed. You've got lost forever\n");
            return be();
            break;
        }
    case 3:
        {
            printf("you started walking in the right and not so long you saw the temple of the Acılı adana\n");

            break;
        }


    }



    return 0;
}
#endif
