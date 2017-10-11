#include <stdio.h>
void main()
{
	int a, b;
	int i, n;
	int flag = 1;
	printf("请输入上限：");
	scanf("%d", &a);
	printf("请输入下限：");
	scanf("%d", &b);

	printf("%d到%d之间的素数为:\n", a, b);
	for (i = a; i <= b; i++) 
	{
		flag = 1;
		for (n = 2; n<i; n++) 
		{
			if (i%n == 0) 
				flag = 0;
		}
		if ((flag == 1) && (i != 1)) {
			printf("%d\n", i);
		}
	}
}