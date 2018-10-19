#ifndef bkutuphane
#define bkutuphane
struct n{
        int x;
        n * next;
};
typedef n node;
void bastir(node * r);
void ekle(node *r, int x);
node * ekleSirali(node * ,int );
node * sil(node *r,int x);


#endif
