#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 100;
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
