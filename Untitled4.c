#include <stdio.h>
int main(){
	float a,b,c,tongdiem,trungbinh;
	printf("nhap diem toan ");
	scanf("%f", &a);
	printf("nhap diem van ");
	scanf("%f", &b);
	printf("nhap diem anh ");
	scanf("%f", &c);  
	tongdiem=a+b+c;
	trungbinh=tongdiem/3; 
	printf("tong diem = %.2f\n",tongdiem);
	printf("trung binh = %.2f\n", trungbinh); 
	return 0; 
} 
