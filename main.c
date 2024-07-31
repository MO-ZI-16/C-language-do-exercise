#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有奇数位于数组的前半部分
//偶数位于后半部分
move_arr_even(int arr[],int sz)
{
	int left = 0, right = sz - 1;
	while (left < right)
	{
		//从左向右找一个偶数,停下来
		while ((left < right)&&arr[left] % 2 == 1)
		{
			left++;
		}
		//从左向右找一个奇数,停下来
		while ((left < right)&&arr[right] % 2 == 0)
		{
			right--;
		}
		//交换奇偶数
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//输入
	for (i = 0; i < sz; i++)
	{
		//scanf("%d",&arr[i]);
		scanf("%d", arr + i);
	}
	//调整
	move_arr_even(arr, sz);
	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
//有序序列合并
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[100];
	int arr2[100];
	//输入n个整数
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//输入m个整数
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//和并打印
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ",arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else 
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}
*/