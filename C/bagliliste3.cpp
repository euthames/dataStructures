#include <stdio.h>
#include <stdlib.h>
#include "bkutuphane.h"
int main(){
	node * root;
	root = NULL;
	root = ekleSirali(root,400);
	root = ekleSirali(root,40);
	root = ekleSirali(root,4);
	root = ekleSirali(root,450);
	root = ekleSirali(root,50);
	bastir(root);
	root = sil(root,50);
	bastir(root);
	root = sil(root,999);
	bastir(root);
	root = sil(root,4);
	bastir(root);
	root = sil(root,450);
	bastir(root);
}









