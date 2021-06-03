#include <stdio.h>
#include <stdlib.h>
int rid()
{
  FILE *fp;

  if ((fp = fopen("riddle.txt", "r")) == NULL) {
      exit(1);
  }

  return 0;
}
