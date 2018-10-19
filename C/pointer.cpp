#include <stdio.h>
#include <stdlib.h>
int f(int *);
int g(int);
int main(){
	int *p;
	int a= 10;
	p = &a;
	printf("%d",*p);
	*p = 20;
	printf("\n %d",a);
	int *q = (int *)malloc(sizeof(int)*a);
	q[3] = 70;
	printf("\n%d",q[3]);
	f(&a);
	printf("\n%d",a);
	g(a);
	printf("\n%d",a);
}
int g(int a){ // call by value
	a = 90;
}
int f(int * a){ // call by reference
 *a= 80;
}
