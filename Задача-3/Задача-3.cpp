
#include <iostream>

int main()
{
	int all = 0;
    int num;
    scanf_s("%d", &num);

	for (int i = 0; i <= num; i++)
	{
		all = pow(2, i);
		printf("%d ", all);
	}
}
