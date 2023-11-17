#include <stdio.h>

int main (void){
	float a;
	float b;
	
	scanf("%f %f", &a,&b);
	float luasA = a*a;
	float luasB = 3.14*(b*b);
	
	//printf ("%f %f\n", luasA, luasB);
	if (luasA>luasB){
		printf("A");
	}
	else if (luasA<luasB){
		printf("B");
	}
	else printf("BEBAS");
	
	return 0;
}
