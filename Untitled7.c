#include <stdio.h>

int main() {
	int a,b,c,d,e;
	printf("nhap so co 4 chu so ");
	scanf("%d", &a);
	b=0;
	b=a/1000;
	c=a/100;
	c=c%10;
	d=a/10;
	d=d%10;
	e=a%10; 
	b=b+c+d+e;
	printf("tong cac chu so la %d",b);
	return 0;
}
