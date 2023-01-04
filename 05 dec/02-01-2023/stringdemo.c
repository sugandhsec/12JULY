#include <stdio.h>
int main()
{
    int m;
    char sentence[50];
    char sentence1[50];
    printf("Enter Sentence: ");
    gets(sentence);
    printf("Enter Sentence1: ");
    gets(sentence1);
    strcat(sentence, sentence1);
    printf("%s\n", sentence1);
    printf("%s\n", sentence);

    return 0;
}