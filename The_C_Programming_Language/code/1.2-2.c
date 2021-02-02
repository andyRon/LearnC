#include <stdio.h>
/*
	当华氏温度fahr=0, 20, 40, ..., 300时，分别打印华氏温度与摄氏温度对照表
  小数
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
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);   
    fahr = fahr + step;
  }
}