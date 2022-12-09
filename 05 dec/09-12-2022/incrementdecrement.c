#include <stdio.h>
int main()
{
    int a = 65;
    int b = 49;
    printf("%d %d", ++a, ++b);
    printf("\n%d %d", a, b);
    printf("\n%d %d", a++, b++);
    return 0;
}
/*
++  increment increase one value +1
-- decrement decrease one value -1

post  value ++ sab kam pehle increment decrement baad me
pre   ++ value sab kamm badme pehle increment decrement
*/