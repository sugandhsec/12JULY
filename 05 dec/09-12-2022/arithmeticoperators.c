#include <stdio.h>
int main()
{
    int a = 28;
    int b = 6;
    float answer = (float)a / (float)b;
    int percent = a % b;//modulo operator//modulus operator
    printf("answer= %f \npercentage=%d", answer, percent);
    return 0;
}
/*

%---divison karna hai par remainder ko yaad rakhna hai
36%5
24%6
39%4
28%6

typecasting
type---datatype
casting--role assign

implicit---self casting C compiler cast
explicit---when casting done by us
datatype(variable)
*/