#include <stdio.h>
void main(){
int i, j;
int *p;
/* pointer ke integer */

p  = &i;
*p = 3 ;
j  = i ;

printf("%d %d %d\n", i , j, *p);
}
