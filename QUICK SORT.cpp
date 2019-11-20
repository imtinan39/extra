
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */



int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n;
  int values[] = { 40, 10, 100, 90, 20, 25,19,18,17,16,15,14,13,12,11 };
  qsort (values, 15, sizeof(int), compare);
  for (n=0; n<15; n++)
     printf ("%d ",values[n]);
  return 0;
}
