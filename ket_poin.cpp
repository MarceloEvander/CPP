#include <stdio.h>
void main()
{
  int i, j;
  int *p;  /* pointer ke integer */

  p  = &i;
  *p = 3 ;
  j  = i ;

  printf("\n\n");

  printf("Pada Kondisi p = &i\n");
  printf("            *p =  3\n");
  printf("             j =  i\n");
  printf("Carilah nilai dari *p, j, dan i !");

  printf("\n\n");

  printf("Alamat memori &i = %d\n",&i);
  printf("Pada kondisi p = &i, nilai &i atau alamat memori i ");
  printf("dimasukan ke p.\n");
  printf("Karena nilai dari &i dimasukan ke p, maka nilai p sekarang adalah %d\n",p);

  printf("\n\n");
  printf("Berapa nilai *p ??\n");
  printf("Nilai *p = %d, karena dari soal jelas bahwa *p=3.\n",*p);

  printf("\n");
  printf("Berapa nilai j ??\n");

  printf("Nilai  j = %d, didapat dari j=i\n",j);
  printf("dimana nilai i = %d, kenapa nilai i = %d ? \n",i,i);

  printf("Kita perhatikan kondisi p = &i. Alamat memori &i = %d\n",&i);
  printf("Pada kondisi ini, nilai &i atau alamat memori i ");
  printf("dimasukan ke p.\n");
  printf("Karena nilai dari &i dimasukan ke p, maka nilai p sekarang adalah %d.\n",p);
  printf("*p artinya 'menunjuk p'dalam hal ini,\n");
  printf("nilai p bernilai sama dengan *p. Didapat p = %d.\n",p);
  printf("Nilai  i = %d\n",i);
  printf("\n\n");

  printf("Berapa Nilai i ??\n");
  printf("Nilai i didapat dari &i= %d\n",&i);
  printf("pada kondisi diatas nilai p = &i dan nilai *p = 3\n");
  printf("karena p dan &i memiliki alamat memori yang sama,\n");
  printf("maka secara logika nilai dari p akan sama dengan &i.\n");
  printf("jadi nilai i = %d",i);
  printf("\n\n");
  printf("Jadi Nilai *p,j dan i adalah %d,%d dan %d",*p,j,i);

}