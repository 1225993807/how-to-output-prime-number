#include <stdio.h>
void main()
{
	int a, b;
	int i, n;
	int flag = 1;
	printf("���������ޣ�");
	scanf("%d", &a);
	printf("���������ޣ�");
	scanf("%d", &b);

	printf("%d��%d֮�������Ϊ:\n", a, b);
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