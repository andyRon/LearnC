/*
     1-12 编写一个程序，以每行一个单词的形式打印其输入 。
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int isspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v')
        return 1;
    else
        return 0;
}

int main() 
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (state) {
            if (isspace(c)) {
                state = OUT;
                putchar('\n');
            } else {
                putchar(c);
            }
        } else {
            if (!isspace(c)) {
                state = IN;
                putchar(c);
            }
        }
    }

}

