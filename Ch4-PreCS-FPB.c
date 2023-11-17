#include <stdio.h>
//prototype
void fpb(int x,int y);
//
int main (void){
	int x, y;
	scanf("%d %d",&x,&y);
	fpb (x,y);
}
//
void fpb(int x,int y){
	int big,fpb;
	if (x>y){
		big=x;
		fpb=y;
		while (big%fpb!=0){
			fpb=big%fpb;
			big=big%fpb;
		}
		printf("%d",fpb);
	}
	else if (x<y){
		big=y;
		fpb=x;
		while (big%fpb!=0){
			fpb=big%fpb;
			big=big%fpb;
		}
		printf("%d",fpb);
	}
	else if (x==y){
		printf("%d",x);
	}
		
}

