/*
1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
*/

#include <stdio.h>

int
main()
{
    int c;
    int prev;

    while ((c = getchar()) != EOF) {
        /*
        if (c != ' ') {
            if (prev == ' ') printf(" %s", c);
            else putchar(c);
        } else {
            prev = c;
        }
        */
        if ( c != ' ' || prev != ' ') 
            putchar(prev = c);
    }
}
