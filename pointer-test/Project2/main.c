#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int input = 0; 
	int sum = 0;
	int i = 0;
	// ‰»Î
	scanf("%d", &input);
	while (input)
	{
		int bit = input % 10;
		if (bit % 2 == 1)
		{
			sum += 1 * pow(10, i);
			i++;
		}
		else
		{
			sum += 0 * pow(10, i);
			i++;
		}
		input /= 10;
	}
	printf("%d", sum);
	return 0;
}
*/
/*
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
*/

/*
int main()
{
	double price = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%lf %d %d %d", &price, &m, &d, &flag);
	//º∆À„
	if (m == 11 && d == 11)
	{
		price = price * 0.7 - flag * 50;
	}
	else if (m == 11 && d == 11)
	{
		price = price * 0.7 - flag * 50;
	}
	else
	{

	}

	// ‰≥ˆ
	if (price < 0.0)
		printf(".2lf\n", 0);
	else
		printf(".2lf\n", price);

	return 0;
}
*/

int main()
{
	//char -128~127
	//unsigned char 0~255
	unsigned char a = 200;
	//0000 0000 0000 0000 0000 0000 1100 1000
	//1100 1000 -aΩÿ∂œ

	unsigned char b = 100;
	//0000 0000 0000 0000 0000 0000 0110 0100
	//0110 0100 -bΩÿ∂œ

	unsigned char c = 0;

	c = a + b;
	//’˚–ŒÃ·…˝
	//0000 0000 0000 0000 0000 0000 1100 1000
	//0000 0000 0000 0000 0000 0000 0110 0100
	//0000 0000 0000 0000 0000 0001 0010 1100
	//0010 1100 -cΩÿ∂œ
	//0000 0000 0000 0000 0000 0001 0010 1100
	printf("%d %d", a + b, c);
	return 0;
}