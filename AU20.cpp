#include<stdio.h>
#include<stdlib.h>

#define f (a+b+c)/(a-b-c)

int main(void){
	
	int a,b,c;
	
	printf("½Ð¿é¤Ja,b,c:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("\nresult:%d\n",f);
	
	system("pause");
	return 0;
}
