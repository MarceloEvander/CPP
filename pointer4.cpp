 #include <stdio.h>
 int nama_fungsi(int *b)
 {
 *b = *b + 1;
 }
 void main(){
 int x = 1;
 nama_fungsi(&x);
 printf("%d",x);
 }
