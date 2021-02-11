/*
练习1-8 编写一个统计结格、制表符与换行符个数的程序 。 
*/
#include <stdio.h>

int main()
{
  long c;
  int ns, nt, nl;
  
  ns = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') ++ns;
    else if (c == '\t') ++nt;
    else if (c == '\n') ++nl;
  }
  printf("Space numbers is %d, Tab numbers is %d, Line Break numbers is %d", ns, nt, nl);
  
}


