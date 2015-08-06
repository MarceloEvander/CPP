#include <stdio.h>

void swap(int i, int j)
{
int t;
t = i;
i = j;
j = t;
}


void main(){
int a,b;
a = 5;b = 10;
printf("%d %d\n", a, b); // outputnya adalah 5, 10
swap(a, b);
printf("%d %d\n", a, b); // sama outputnya adalah 5, 10 karena tidak ada perintah mencetak swap;
}
