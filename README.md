# ComSec_HW2

Q1:

int main(int argc, char** argv) {
	int a = 3;
	int b = 5;
	int c;
	int d;
	int e;
	c = a*b;
	d = a/2;
                e = c- d;
	printf("%d\n",e);
	system("pause");	
	
	return 0;
}

The  functionality of the code is to calculate the formual 3*5-3/2 and the result is 14.

Q2:

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

The functionality of the code is to pick the maximun value of the array [12,15,221,3,432,54,16,67] and the result is 432.

Q3:

int main(int argc, char** argv) {
	int a =
	int b;
	int c;
	int d;
	while (a<=999)
      {
      	b = a/100;
	    c = (a - b*100)/10;
	    d = (a - b*100-c*10);
	    if (b*b*b+c*c*c+d*d*d == a)
	    {
	    	printf("%d\n",a);
	    	
		}
	    a++;
	  }
	system("pause"); 
	return 0;
}
The functionality of the code is to choose narcissistic numb
er. Narcissistic number is a three-digit number that  the number of  unit digit to the power of 3 plus the number of ten digit  to the power of 3 plus the number of  hundreds digit to the power of 3 is the original number. Then the number is what we want to pick. The results are 153,370,371,407.


Q4:

#include <stdio.h>
int proc1(int *a1, int a2, int a3)
{
  int v4; 
  int v5;
  int v6; 
  int i; 
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

The functionality of the code is the Josephus problem. Pick the 7th number  out from 1 to 100 and find out what the final number will be picked.
Once the number is picked out, then it  is set as 0 and the number should be skipped during iteration. The final picked number is 50.
