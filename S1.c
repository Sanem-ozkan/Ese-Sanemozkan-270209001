#include <stdio.h>
#include<math.h>
#include <ctype.h>
#include <stdlib.h>

#ifndef S1_C
#define S1_C
int S1()
{

int D1;
scanf("%d",&D1);

switch(D1)
{
    case 1:{

   int a,b,i;
   float total=0,average;
printf("How many number will you apply? : ");
scanf("%d", &b);
   for(i=0;i<b;i++){
printf("%i. give the number : ",i+1);
scanf("%d", &a);
total=total+a;
}
average=total/b;
printf("average is : %.2f",average);
getchar();
   break;
}
    case 2:
        {
    int given,zb,convalue=0;
printf("give me a value:");
scanf("%i",&given);

   for(zb=2;zb<given;zb++)
{
   if(given%zb==0)
{
printf("not a prime number.");
convalue=1;
   break;
}
}
if(convalue==0)
printf("prime number.");
            break;

        }
    case 3:
        {
             int t1 =1, t2 = 1, nextTerm = 0, n;

    printf("give me pozitif number: ");
    scanf("%d", &n);
    if(n<=0)
    {
    printf("this is not pozitif number");
    }
    else
    printf("Fibonacci series: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
            break;
        }
    case 4:
        {
{
int num,divide=2;
printf("please give me the number: ");
scanf("%d",&num);
int div=num;
printf("prime factors are: ");
while(divide<num){
if(div%divide==0){
printf("%d, ",divide);
div/=divide;
}
else{
divide++;
}
}
}
        break;
}
default:{
printf("MDL:Well if you don't want to my help,go for it\n");

}

}
return 0;
}
#endif
