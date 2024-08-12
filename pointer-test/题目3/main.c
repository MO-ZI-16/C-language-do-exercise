#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int is_left_move(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		char tmp = arr1[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		if (strcmp(arr2,arr1) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;

	strncat(arr1, arr2, len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	//判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("ok\n");
	else
		printf("NO\n");
	return 0;
}
*/
/*
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int arr[10][10] = { 0 };//c99
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//输出
	for (i = 0; i < m; i++)
	{
		//行
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10];
	int i = 0;
	int j = 0;
	int flag = 1;//是上三角矩阵,
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;//不是上三角矩阵
				goto end;
			}
		}
	}
	end:
	if (flag == 0)
	{
		printf("NO\n");
	}
	else
		printf("YEs\n");
	return 0;
}
*/

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if(arr[i] < arr[i - 1])
				flag2 = 1;
			else
			{
				;
			}
		}
	}
	if (flag2 + flag1 <= 1)
	{
		printf("Sorted\n");
	}
	else
		printf("Unorted\n");
	return 0;
}