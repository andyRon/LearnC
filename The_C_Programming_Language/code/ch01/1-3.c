#include <stdio.h>
/*
	练习1-3 修改温度转换程序，使之能在转换表的顶部打印一个标题 。
*/
int
main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  printf("华氏温度与摄氏温度对照表\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);   
    fahr = fahr + step;
  }
}