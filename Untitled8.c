#include <stdio.h>

int main(){
	int a,b,i=1;
	printf("nhap so co 4 so ");
	scanf("%d", &a); 
	while(i<=4){
		b=b*10+a%10;
		a/=10; 
		i++; 
	} 
	printf("so dao nguoc %d\n",b); 
	
	return 0; 
} 
