#include <stdio.h>
int main()
{
    char c1, c2 = '1';

    // if(c1==c2)
    // 	printf("Characters are equal.\n");
    // else
    // 	printf("Characters are not equal.\n");
    do
    {
        printf("Enter two characters: ");
        scanf("%c", &c1); // space b/w %c and %c
        switch (c1)
        {
        case 'o':
        {
            printf("O");
            break;
        }
        default:
        {
            printf("Consonant");
            break;
        }
        }
    } while (c1 != c2);

    return 0;
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     // char temp = '*';
//     // char ap;
//     // // printf("%c", ap);
//     // do
//     // {
//     //     printf("Enter Character: ");
//     //     // ap = getchar();
//     //     // scanf("%c", &ap);
//     //     // getch(ap);
//     //     // gets(ap);
//     // } while (ap != temp);
//     // char a = '1';

//     // char b = 'h';

//     // if (a < b)
//     // {
//     //     printf("%c greater than %c\n", a, b);
//     // }
//     return 0;
// }