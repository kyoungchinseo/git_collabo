
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char[] argv) 
{
	printf("hello world\n");
	int a= 0;
	printf("%d\n",a);

	int x = 10;
	int y = 0;

	while(x > 3) {
		y = y + x;
		x = x - 1;
		printf("x: %d, y: %d\n",x,y);
	}

}
