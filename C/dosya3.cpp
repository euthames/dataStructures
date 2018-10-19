#include <stdio.h>   
int main() 
{ 
	FILE *f;
 	char buffer[11];
 	if (f = fopen("out.txt", "r")) 
	{ 
		fread(buffer, 1, 10, f); 
		buffer[10] = 0; 
		fclose(f); 
		printf("dosyanın ilk 10 karakteri:\n%s\n", buffer);
	 }  
	else{
		printf("dosya acilamadi bir hata olustu");
	}
 	return 0; 
}

