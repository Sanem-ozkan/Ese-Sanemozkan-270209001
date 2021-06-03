#include <stdio.h>
#include<stdlib.h>
int A1()
{
    int B;
    printf("Mathdog Lokum: Let me answer before you ask questions.\n Yes, you were chosen for this task because the developer found the building of a character like you easy. Even though I will help you on our next journey, the choices are yours.\n You can achieve very different results and even you can die(dramatic tone of voice) But don't worry, if you die, you'll be thrown (chuckling) at the beginning of the battle sequence.\n And here you have your inventory\n map: Locak are and dark forest map\n money:102.91meze\n matdoglokum: Now, there are only 3 ways to make the game simpler. (How creative isn't it)\n 4=You can go to the library and look at ancient inscriptions\n 5=you can go to the forest to look for sounds and lights that you are told by residends\n 6=or simply, you can follow the team");
    scanf("%i",&B);
    system("cls");
switch(B)
{
case 4:
    {
        A2();
        break;
    }
case 5:
    {
       forrest();
       final();
    break;
    }
case 6:
    {

        A5();
    break;
    }

return 0;
}










    return 0;
}
