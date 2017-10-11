#include<stdio.h>
int main()
{
    int i, j;
	int flag;
	for (i = 1; i <= 20; i++)
	{
		flag = 1;
		for (j = 2; j < 20; j++)
		{
			if (i%j == 0)
				printf("%5d is a prine number\n");
		}
	}
	return 0;
}