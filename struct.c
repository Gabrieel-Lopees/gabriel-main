//struct

#include<stdio.h>
#include<string.h>

struct elemento{
    int x;
    char str[20];
    };

main(){
struct elemento a, b;
strcpy (a.str, "string");
a.x = 5;
printf("\n\nOriginal: %d - %s", a.x, a.str);
b = a;
printf ("\nCopia: %d - %s", b.x, b.str);
b.str[1] = 'p';
printf ("\n\nAPOS ALTERAR STRING");
printf ("\nOriginal: %d = %s", a.x, a.str);
printf ("\nCopia: %d - %s", b.x, b.str);
}
