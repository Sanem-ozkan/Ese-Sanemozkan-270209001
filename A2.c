#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int A2()
{

     printf("When you reached the library out of breath, the sun had risen in the sky.Since the whole clergy is hectic, you could find the books you are looking for in the library without meeting anyone.\n 7=first creation and selection of four materials\n 8=altars and preservation of materials\n 9=kebab eating rituals\n Which one do you prefer?");
    int C;
    scanf("%i",&C);
    system("cls");

    switch(C)
    {
    case 7:
        {
            A3();

            break;
        }
    case 8:
        {
        printf("You were reviewing the book, but you couldn't find any logical information about the disappearance of the potatoes.\n you: Can you read\n mat dog lokum:I can talk and You ok with this but not this ?! furthermore you worship kebap. Don't push your luck\n");
        return A2();
        break;
        }

    case 9:
    {
        printf("You were reviewing the book, but you couldn't find any logical information about the disappearance of the potatoes.\n you: Can you read\n mat dog lokum:I can talk and You ok with this but not this ?! furthermore you worship kebap. Don't push your luck\n");
      return A2();
      break;
    }

    }
return 0;
}


