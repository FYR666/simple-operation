#include"stdio.h"
int main()
{
	int a, b, c, d, F, C;
	printf("请输入两个数(求和)：");
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("求和=%d\n", c);

	printf("请输入长方形的长和宽(求周长面积)：");
	scanf_s("%d%d", &a, &b);
	c = (a + b) * 2;
	d = a*b;
	printf("长方形的周长和面积分别为：%d %d\n", c, d);

	
	printf("请输入三角形的底和高(求面积)：");
	scanf_s("%d%d", &a, &b);
	c = a*b / 2;
	printf("三角形的面积为：%d\n", c);

	printf("请输入梯形的上低、下底和高（求面积）：");
	scanf_s("%d%d%d", &a, &b, &c);
	d = (a + b)*c / 2;
	printf("梯形的面积为：%d\n", d);

	printf("请输入一个华氏摄氏度：");
	scanf_s("%d", &F);
	C = 5 * (F - 32) / 9;
	printf("转换为摄氏度：%d\n", C);

	return 0;
}