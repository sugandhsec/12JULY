#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "a");
    char senetcne[65];
    printf("Enter string ");
    gets(senetcne);

    fprintf(fp, "%s", senetcne);
    // fprintf(fp,"%s" ,"ye me direct add kar rha hu");
    fclose(fp);
    return 0;
}
/*
FILE *pointername;

file open
pointername=fopen("filename","mode")
read  r --file open for read purpose if file not exist then i will give error


write w --file open for writing purpose if file not exist then i will create it but not give error if file exist then i will delete all old content


append a---file open for update purpose if file not exist then i will create it but not give error if file exist the i will not erase old content

file work
writing in file
printf("jgferjer");
int a=65;
printf("%d",a);
fprintf(filepointername,"conetent");
fprintf(filepointername,"variable specifier",variablename);




file close

fclose(filepointername);


*/