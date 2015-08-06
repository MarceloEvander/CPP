#include <stdio.h>
void swap(int*a, int*b)
{
int t;
t = *a; // t diisi dengan alamat dari A dalam hal ini ,nilai t memiliki alamat memori yang sama dengan A.
*a= *b; // alamat memory dari A diisi dengan alamat memory dari B dalam hal ini alamat memori A samadengan B.
*b = t; // alamat dari B diisi dengan nilai t, t sendiri alamatnya samadengan A (nilai nya juga samadengan A), sehingga Alamat B berisi nilai A.
}
void main()
{
int a,b;
a = 5;b = 10;

printf("\nKONDISI SEBELUM DIPROSES DALAM FUNCTION SWAP : %d %d\n", a, b);

swap(&a,&b);// memanggil alamat dari a,b; bukan nilainya.

printf("\nKONDISI SETELAH DIPROSES DALAM FUNCTION SWAP :%d %d\n", a, b);//sehingga yang tercetak adalah 10,5.
}
