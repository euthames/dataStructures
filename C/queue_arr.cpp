#include <stdio.h>
#include <stdlib.h>
int * dizi=NULL;
int sira = 0,sirabasi=0,boyut=2;
int deque(){
	if(sira==sirabasi){
		printf("sira bos");
		return -1;
	}
	//printf(" boyut = %d, sira= %d , fark=%d\n",boyut,sira,sira-sirabasi);
	if(sira-sirabasi<=boyut/4){
		int * dizi2 = (int*)malloc(sizeof(int)*boyut/2);
		for(int i = 0;i<sira-sirabasi;i++){
			dizi2[i]=dizi[sirabasi+i];
		}
		sira-=sirabasi;
		sirabasi=0;
		free(dizi);
		boyut /=2;
		dizi = dizi2;
	}
	return dizi[sirabasi++];
}
void toparla(){
	if(sirabasi==0)
		return ;
	for(int i = 0;i<boyut;i++){
		dizi[i] = dizi[i+sirabasi];
	}
	sira -= sirabasi;
	sirabasi = 0;
}
void enque(int a){
	if(dizi==NULL){
		dizi = (int*)malloc(sizeof(int)*2);
	}
	if(sira >= boyut){
		boyut *= 2;
		int *dizi2 = (int *) malloc(sizeof(int)*boyut);
		for(int i = 0;i<boyut/2;i++)
			dizi2[i] = dizi[i];
		free (dizi);
		dizi = dizi2;
	}
	dizi[sira++]=a;
}
int main(){
	for(int i = 0;i<20;i++){
		enque(i*10);
	}
	printf(" durum: boyut : %d sira %d sirabasi %d",boyut,sira,sirabasi);
	for(int i = 0;i<13;i++){
		printf("%d ",deque());
	}
	printf(" durum: boyut : %d sira %d sirabasi %d",boyut,sira,sirabasi);
	for(int i = 0;i<20;i++){
		enque(i*10);
	}
	printf(" durum: boyut : %d sira %d sirabasi %d",boyut,sira,sirabasi);
	for(int i = 0;i<30;i++){
		printf("%d ",deque());
	}
	printf(" durum: boyut : %d sira %d sirabasi %d",boyut,sira,sirabasi);

}
