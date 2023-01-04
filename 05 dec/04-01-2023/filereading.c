#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("Demo.txt", "r");
    do
    {
        ch = getc(fp);
        printf("%c", ch);

    } while (ch != EOF); // END OF FILE
    return 0;
}