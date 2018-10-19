#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

int main(){
	stack *s1 = tanim();
	stack *s2 = tanim();	
	for(int i = 0;i<10;i++){
		push(i*10,s1);
	}	
	bastir(s1);
	for(int i = 0;i<10;i++){
		push(pop(s1),s2);
	}
	bastir(s1);
	bastir(s2);
}
