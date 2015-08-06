#include<stdio.h>

void main()
{

int x =87;
int y;
int *px;

px = &x ;
y  = *px;

printf("Diberikan int x = 87;\n\n");
printf("          int y;\n\n");
printf("          int *px;\n\n");
printf("          px = &x;\n\n");
printf("          y  = *px;\n\n\n");
printf("Hasilnya : \n\n");
printf("          :: Alamat x (&x) berada di %p\n\n",&x);
printf("          :: isi px adalah alamat x yaitu %p\n\n",px);
printf("          :: isi x adalah %d\n\n",x);
printf("             (karena alamat x sama dengan alamat px,\n\n");
printf("              maka nilai yang ditunjuk oleh px atau *px= %d )\n\n",*px);
printf("          :: nilai y = %d, karena y berisi *px.\n",y);
}