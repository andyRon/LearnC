#include <stdio.h>

/*
练习1-5 修改温度转换程序，要求以逆序(即按照从300度到0度的顺序)打印温度转 换表 「
 */

int
main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  printf("华氏温度与摄氏温度逆序对照表\n");
  for (fahr = upper; fahr >= lower; fahr = fahr - step) {
  	celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}