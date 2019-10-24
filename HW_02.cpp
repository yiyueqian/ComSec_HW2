#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main()
{
  
  int i;
  int j = 0;
  int x[8] = {12,15,221,3,432,54,16,67};
  for ( i = 0; i < 7; ++i )
    if (x[i] > j)
      j = x[i];
  printf("%d\n",j);
  system("pause");
  return 0;
}
