#include <stdio.h>

int main() {
	int a,b,c,d,e,f,g;
	printf("nhap so co 4 chu so ");
	scanf("%d", &a);
	b=a/1000;
	c=a/100;
	f=c%10; 
	d=a/10;
	g=d%10;
	e=a%10; 
	printf("so dao nguoc %d%d%d%d",e,g,f,b);
	return 0;
}
