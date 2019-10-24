#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int proc1(int *a1, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h],

  v5 = 0;
  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v6 = 1;
    while ( v6 < a3 )
    {
      while ( !a1[v5] )
        v5 = (v5 + 1) % a2;
      ++v6;
      v5 = (v5 + 1) % a2;
    }
    while ( !a1[v5] )
      v5 = (v5 + 1) % a2;
    v4 = a1[v5];
    a1[v5] = 0;
  }
  return v4;
}

int main(int argc, const char **argv, const char **envp)
{
  int v3; 
  int v5[100]; 
  int v6; 
  int v7; 
  int i; 

  v7 = 7;
  v6 = 100;
  for ( i = 0; i < v6; ++i )
    v5[i] = i + 1;
  v3 = proc1(v5, v6, v7);
  printf("%d\n", v3);
  system("pause");
  return 0;
  
}
