/*#include <stdio.h>
int main()
{
//0���� 100���� �A���� ����Ͻÿ�
	//1. +2 �� �ϸ� �ȴ�.
	//2. 2�� ������ �������� 0��
printf("=========================================1��=======================================\n");
int number2 = 2;
 while (number2 < 101) {
	printf("%d\n", number2);
	number2 = number2 + 2;
}
printf("=========================================2��=======================================\n");
int i = 0;
//2���� �������� ����� ���ؾ��Ѵ�.
//2���� Ŭ�� ����� �ؾ��Ѵ�.
while (i < 101) {
	if (i % 2 == 0) {
		if (i >= 2) {
			printf("%d\n", i);
		}

	}
	i = i + 1;
}
}
*/

/*#include <stdio.h>
int main()
{
	//0���� 1000���� ������ 3�� ����� ����ϼ���.
	//*3�� �� ����ؾ� �Ѵ�
	//3���� ���� �������� ���� 0�� �Ǿ�� �Ѵ�. 

	int i = 3;
	while (i < 101)
	{
		printf("%d\n", i);
		i = i + 3;
	}

	int j = 0;
	while (j < 101)
	{
		if (j % 3 == 0)
		{
			if (j >= 3)
			{
				printf("%d\n", j);

			}
			j = j + 3;
		}
	}


	return 0;
}
	*/


//1���� 100������ ���� 5050�Դϴ�/..
#include <stdio.h>

int main()
{
	int i, sum;
	i = 1;
	sum = 0;

	while (i <= 100)
	{
		sum += i;

		i++;
	}
	printf("1���� 100������ ���� %d�Դϴ�.", sum);

	return 0;

}

