#include <stdio.h>
int main()
{
    int k = 10;
    char buff[255];
    FILE *fp;
    fp = fopen("file.txt", "r"); // opening file
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    } // writing data into file;

    fclose(fp); // closing file
}