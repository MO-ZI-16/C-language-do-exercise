#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	//
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)) == 1
							&& (((b == 2) + (e == 4)) == 1)
							&& (((c == 1) + (d == 2)) == 1)
							&& (((c == 5) + (d == 3)) == 1)
							&& (((e == 4) + (a == 1)) == 1))
						{
							if (a * b * c * d * e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
							}
						}
											
					}
				}
			}
		}
	}
	return 0;
}
*/
/*
int main()
{
	int killer = 0;
	for ( killer = 'a'; killer <= 'd';killer++ )
	{
		//判断
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}*/

/*
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j <=i; j++)
		{
			if (j == 0)
			{
				arr[i][j] == 1;
			}
			if (i == j)
			{
				arr[i][j] == 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

#include<assert.h>
/*
//实现一个函数.可以左旋字符串中的k个字符
/*
//三次逆序
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k) 
{
	int len = strlen(arr);
	k %= len;
	reverse(arr, arr + k - 1);//左
	reverse(arr + k, arr + len - 1);//右
	reverse(arr, arr + len - 1);//整
}

void left_rotate(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k = k % len;
	for (i = 0; i < k; i++)
	{
		//旋转1个字符
		//11
		char tmp = arr[0];
		//2
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		//3
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s\n",arr);
	return 0;
}
*/

//杨氏矩阵
//有一个数字矩阵,矩阵的每行从左到右是递增的,矩阵的每列从上到下是递增的
//编写程序查找某个数字是否存在
//要求:时间复杂度小于0(N),所以就不能遍历了
//1 2 3
//4 5 6
//7 8 9
//N
/*
struct Point
{
	int x;
	int y;
};
struct Point find_num(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	struct Point p = { -1,-1 };
	while (x <= r - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}
*/
int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;//找不到
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int a = 3;
	int b = 3;
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
		printf("%d %d\n", a, b);
	else
		printf("找不到\n");
	return 0;
}