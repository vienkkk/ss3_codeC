#include <stdio.h>

int main(){
	int r; 
	float a,b,pi;
	pi=3.14;
	printf("nhap ban kinh ");
	scanf("%d/n", &r);
	a=2*pi*r;
	b=pi*(r*r);
	printf("chu vi = %.2f\n",a);
	printf("dien tich = %.2f\n",b); 
	return 0; 
} 
