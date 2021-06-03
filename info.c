#include <stdio.h>
#include <stdlib.h>
#ifndef INFO_C
#define INFO_C
int info()
{
  FILE *fp;

  if ((fp = fopen("temple.txt", "r")) == NULL) {
      exit(1);
  }

  return 0;
}
#endif
