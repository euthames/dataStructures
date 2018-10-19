#include <stdio.h>
#include <stdlib.h>
struct n {
        int data;
        n *next;
        };
typedef n node;
int main(){
 node * root= (node *) malloc(sizeof(node));
 node * temp = root;
 int i;
 for(i=0;i<10;i++){
         temp->data=i*10;
         temp->next=(node *) malloc(sizeof(node));
         temp=temp->next;
         }     
 printf("inserted");
 temp =root;
 for(i=0;i<10;i++){
         printf("\n%d",temp->data);
         temp=temp->next;
         
         }
    return 0;
}  
