#include"stdio.h"
int main()
{
	int a, b, c, d, F, C;
	printf("������������(���)��");
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("���=%d\n", c);

	printf("�����볤���εĳ��Ϳ�(���ܳ����)��");
	scanf_s("%d%d", &a, &b);
	c = (a + b) * 2;
	d = a*b;
	printf("�����ε��ܳ�������ֱ�Ϊ��%d %d\n", c, d);

	
	printf("�����������εĵ׺͸�(�����)��");
	scanf_s("%d%d", &a, &b);
	c = a*b / 2;
	printf("�����ε����Ϊ��%d\n", c);

	printf("���������ε��ϵ͡��µ׺͸ߣ����������");
	scanf_s("%d%d%d", &a, &b, &c);
	d = (a + b)*c / 2;
	printf("���ε����Ϊ��%d\n", d);

	printf("������һ���������϶ȣ�");
	scanf_s("%d", &F);
	C = 5 * (F - 32) / 9;
	printf("ת��Ϊ���϶ȣ�%d\n", C);

	return 0;
}