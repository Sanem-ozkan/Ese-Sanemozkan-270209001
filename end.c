#include <stdio.h>
#ifndef END_C
#define END_C
#include<stdlib.h>
int son()
{

    printf("You appeared before the goddess of Adana. The goddess greeted you with a smile.\n");
    printf("Goddess:I am very glad that you can come. Thank you so much for bringing Lokum'u here. Now if you'll excuse us, we have to save the Lokum and the potatoes.\n");
    printf("The goddess took Lokum and placed it in a special temple, and lined up 4 holy vegetables around it, at that moment Lokum began to shine with a great light. The power emanating from the Lokum was so intense that you couldn't even look at it. You saw this light go to a point, and then there was a huge explosion. Then when the light went out, you looked around and saw that many potatoes were looking at you with joy.");
    printf("Goddess: Finally! We managed to circumvent this threat. thank you. We couldn't have brought Lokum here without you. I want to offer you two gifts as a token of my gratitude.\n 1-Would you like to have the honour of feeding Lokum\n 2-Do you want to open a kebab shop for yourself?");
    int bitti;
    scanf("%d",&bitti);
    system("cls");
    switch(bitti)
    {
    case 1:
        {
            printf("You return to your little kebab shop with Lokum. The kebab master is very surprised to see the dog next to him. And in a short time, the rumour that there is a dog in this town's kebab shop spreads all over the country. Everyone flocks to your shop to see the dog and you soon become one of the biggest kebab restaurants in \n");
            printf("CONGRATULATIONS.YOU FINISHED THE GAME WITH ONE OF THE BEST ENDINGS EVER. THANKS FOR PLAYING");
            break;
        }

    case 2:
        {   printf("You stand proudly in front of your own shop. You already have a customer base because you are the one who saves the potatoes, and there is no limit to what you can do with the pepper that the Lokum has given you as a gift. You have a very long and successful career ahead of you, you can feel it.");
            printf("CONGRATULATIONS.YOU FINISHED THE GAME WITH ONE OF THE BEST ENDINGS EVER. THANKS FOR PLAYING");
            break;
        }
return 0;
}


}
#endif
