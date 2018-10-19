#include <stdio.h>
#include <stdlib.h>
int boyut (char * dizgi){
	int i = 0;
	while (dizgi[i]!='\0')
		i++;
	return i;

}

int main(){
	char isim[20];
	char *soyisim;
	soyisim= (char *) malloc(sizeof(char)*20);
	isim[0] = 's';
	isim[1] = 'a';
	isim[2] = 'd';
	isim[3] = 'i';
	isim[4] = '\0';
	scanf("%s",soyisim);
	isim = soyisim;
	printf(" tanistigimiza memnun oldum %s %s",isim, soyisim);
	printf("ucuncu karakterler %c %c",isim[3], soyisim[3]);
	printf("isim boyutu %d",boyut(isim));
}
