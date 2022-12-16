#include <stdio.h>
int main()
{
    int num1;
    printf("Enter nUmber");
    scanf("%d", &num1);
    if (num1 > 0)
    {
        printf("positive");
    }
    else if (num1 < 0)
    {
        printf("negative");
    }
    else if (num1 == 0)
    {
        printf("Zero");
    }
    return 0;
}






git config --global user.name "sugandhsec"
git config --global user.email "sugandhsec112@gmail.com"

first time commands

git init
git add .
git commit -m "message"
git remote add origin https://github.com/sugandhsec/Tops-assignement-6-00-to-7-30.git
git push -u origin master

everytime 
git add .
git commit -m "message"
git push -u origin master