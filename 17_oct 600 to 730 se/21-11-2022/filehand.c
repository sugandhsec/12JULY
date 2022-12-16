#include <stdio.h>
int main()
{
    char str[255];
    gets(str);
    FILE *fp;
    fp = fopen("file.txt", "a"); // opening file
    fprintf(fp, "%s", str);      // writing data into file
    fclose(fp);
    return 0; // closing file
}
/*
file open
FILE *fp
fp=fopen("t1.txt","r");
modes of files
read mode---r---error when file not exist
write mode---w---if file not exist then it not gives error it will just create it and if it exist then it open and deletes all old content
append mode--a---if file not exist then it not gives error but it will create new file and if data is prersent in existing file then it will not remove it
read and write---r+---open for read and write purpose and error if file not present
read and write--w+---if not present then create it and if present then empty it and deltes its old content
read and write---a+---if file not exist then creates but if exists then open and if we want to rerad the reading starts from begin and if we want writing then writing or also c aleed as appending starts from last of the previous content

write read update


fclose(file pointer name)
fclose(fp)
file close
*/