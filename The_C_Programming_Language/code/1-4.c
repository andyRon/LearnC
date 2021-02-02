#include <stdio.h>
/*
练习1-4 编写一个程序打印摄氏温度转换为相应华氏温度的转换表 。
 */

int
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -273;
	upper = 273;
	step = 20
	;

	celsius = lower;
	printf("摄氏温度与华氏温度对照表\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%6.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

}