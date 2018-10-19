#include <stdio.h>
#include <stdlib.h>
struct n {
int sayi;
struct n *next;
};
typedef struct n node;

void bastir(node * r){
        while(r!=NULL){
                printf("%d ",r->sayi);
                r= r->next;
        }
}

/* ************************************************************************* */
node * sirali_ekle(node *list, int value){
         
    if(list == NULL){//liste boştur.
         
         list=(node *)malloc(sizeof(node));
          list->next=NULL;
         list->sayi=value;         
perror("5");
         return list;
    }
    if (list->sayi > value){
         
       node * temp = (node *)malloc(sizeof(node));
        temp->sayi=value;
        temp->next=list;
perror("4");
         return temp;    
    } 
 
perror("2");
     node *iter=list;
    
    while( iter->next != NULL && iter->next->sayi < value  )
    {        
                  iter=iter->next;
perror("3");
      }
    
perror("2");
   node * temp = (node *)malloc(sizeof(node));
perror("1");
    temp->sayi=value;
perror("1");
    temp->next= iter->next;
perror("1");
    iter->next=temp;   
perror("1");
    return list;
   
}
int main(int argc, char** argv) {
    node *root;
    root = NULL;

 root=sirali_ekle(root,100); 
bastir(root);
perror("1");
fflush(stdout);
 root=sirali_ekle(root,48); 
bastir(root);
fflush(stdout);
perror("1");
  root= sirali_ekle(root,2);  
bastir(root);
fflush(stdout);
perror("1");
  root=sirali_ekle(root,300);
bastir(root);

fflush(stdout);
}
