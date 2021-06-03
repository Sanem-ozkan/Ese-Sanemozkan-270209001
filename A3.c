#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#ifndef A3_C
#define A3_C
int A3()
{
    while(1)
{
    printf ("After weighing all 3 books with your hand, you chose the heaviest one. When you picked up the book 'The First Creation and Selection of the Four Materials', you saw a mechanism with several groups of numbers on it. It seems that this is some kind of locking mechanism.\n");
    printf("5005\n 13,11,7,...\t 454,678,908,667,\n 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ..., 233\n 1233,875,679,983\n ");
    printf("Mathdog Lokum:Hey, I can help you with this. I have several talents. which math equation do you want to apply?\n 1=averaging\n 2=Finding prime numbers\n 3=Finding the fibonacci sequence of numbers\n 4=finding the greatest prime factor");
int c1;
printf("\nFirst combination is:\n 5005\n 13,11,7,...\n");
S1();
scanf("%d",&c1);
if(c1==5){

    printf("Did you here the click sound\n");
}else{
        printf("I dont think so buddy\n");
        continue;
    }
float c2;
printf("\nSecond combination is:\n 454,678,908,667");
S1();
scanf("%f",&c2);
printf("%f",c2);

if(c2==677.75){
    printf("you are doin good buddy\n");
}else
    {
       printf("ops back to the begenning\n");
        continue;
    }

    int c3;
    printf("third combination is:\n 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ..., 233\n");
    S1();
    scanf("%d",&c3);

if(c3==144){
     printf("only last one");
}else{
         printf("aand zero again");

        continue;
    }

       int c4;
       printf("\n last combination is: \n 1233,875,679,983 ");
int cevap=983;
for(int d=1; d<5;d++ ){
  S1();
    printf("will you answer the question?\n");
    printf("1=yes\n 2=no\n");
    int z;
    scanf("%d",&z);
    if(z==1)
    {
       break;
    }
}
scanf("%d",&c4);
if(c4==983){
    printf(" you did it .3");
    break;
}else{
        printf("sorry pal");
        continue;
    }

}
    cob();
return 0;
    }


#endif
