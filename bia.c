#include <stdio.h>
#include<math.h>
int bin [20],lkm,number,i;

int bia()
{
    printf("Enter the value for Decimal number.\n:");
    scanf("%d",& number);
    lkm=0;
    while(number>0)
     {
        bin[lkm]=number%2;
        number=number/2;
        lkm++;
    }
    printf("Equivalent Binary value=:");
    for(i=(lkm-1); i>=0;i--)
        printf("%d",bin[i]);
    return 0;
}
