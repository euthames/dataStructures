// Binary search tree

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	node * right;
	node * left;	
}node;

node * insert(node * BStree, int x){
	if(BStree == NULL){
		node * BSTroot = (node *)malloc(sizeof(node));
		BSTroot -> right = NULL;
		BSTroot -> left = NULL;
		BSTroot -> data = x;	
		return BSTroot;
	}
	if(BStree->data < x)	
		BStree -> right = insert(BStree -> right, x); 	
	else
		BStree -> left = insert(BStree -> left, x); 
	return BStree;

}
void travers_LNR(node * BStree){
	if(BStree == NULL)
		return;
	
	if(BStree -> left != NULL)
		travers_LNR(BStree -> left);
	printf("%d ",BStree -> data);
	if(BStree -> right != NULL)
		travers_LNR(BStree -> right);
	
	
}

int search(node * BStree, int x){
	if(BStree == NULL)
		return -1;
	
	if(BStree->data == x)
		return 1;
	if(search(BStree->right,x)==1)
		return 1;
	if(search(BStree->left,x)==1)
		return 1;

	return -1;
}

int max(node * BStree){

	if(BStree == NULL)
		return -1;

	while(BStree->right != NULL)
		BStree=BStree->right;

	return BStree->data;
}


int min(node * BStree){

	if(BStree == NULL)
		return -1;

	while(BStree->left != NULL)
		BStree=BStree->left;

	return BStree->data;
}

//node * delete(node * BStree, int val){
//	if(BStree == NULL)
//		return NULL;
	
//	if(BStree->data == val)
		
//}

int main(){

	node * BStreeHead = NULL;
	BStreeHead = insert(BStreeHead,56);
	BStreeHead = insert(BStreeHead,26);
	BStreeHead = insert(BStreeHead,200);
	BStreeHead = insert(BStreeHead,190);
	BStreeHead = insert(BStreeHead,213);
	BStreeHead = insert(BStreeHead,18);
	BStreeHead = insert(BStreeHead,28);
	BStreeHead = insert(BStreeHead,12);
	BStreeHead = insert(BStreeHead,24);
	BStreeHead = insert(BStreeHead,27);	
	travers_LNR(BStreeHead);
	
	printf("Search result: %d ",search(BStreeHead,24));
	printf("Search result: %d ",search(BStreeHead,12));
	printf("Search result: %d ",search(BStreeHead,7566));
	
	printf("Max: %d ",max(BStreeHead));		
	printf("Min: %d ",min(BStreeHead));	
	return 0;
}






