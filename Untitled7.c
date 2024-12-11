#include <stdio.h>

int main() {
	int a,c, i=1;
	printf("nhap so co 4 chu so ");
	scanf("%d", &a);
	while(i<=4) {
		c+=a%10;
		a/=10;
		i++;
	}
	printf("tong cac chu so la %d",c);
	return 0;
}
