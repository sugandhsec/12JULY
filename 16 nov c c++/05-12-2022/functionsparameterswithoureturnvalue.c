#include <stdio.h>
int x, y, z; // global variable
void addition(int a, int b)//parameters
{
    // int m, n, answer;//local variable
    // printf("Enter Number: ");
    // scanf("%d %d", &m, &n);
    int answer;
    answer = a + b;   
    printf("\nanswer=%d ", answer);



    
}

int main()
{
    // int k;//local
    // printf("K=%d", k);
    addition(85, 98);//arguments
    addition(35, 68);
    // printf("M=%d N=%d answer=%d", m, n, answer);
    return 0;
}