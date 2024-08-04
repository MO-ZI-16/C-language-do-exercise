#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//内存-->内存单元(1byte)-->编号-->地址-->指针
//所以指针就是一个地址
//口头语说的指针一般指:指针变量
//指针变量就是一个变量而已,就是一块内存空间,指针变量用来存放地址


//指针类型的意义:
// +1/-1的操作,跳过几个字节(步长)
// 解引用操作的时候的权限
/*
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 30;
	printf("%d\n", a);

	char ch = 'w';
	char* pch = &ch;

	//指针数组:本质上就是数组,数组中存放的是指针(地址)
	int* pa;
	int* pb;
	int* pc;
	int* arr[3] = { pa,pb,pc };	
	return 0;
}


//函数指针
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);

	//函数的地址存放在函数指针变量中
	int (*pf)(int, int) = &Add;
	return 0;
}

//存放函数指针的数组
//int(*pfArr[4])(int,int)
//pfArr数组的每个元素的类型是:int(*)(int,int)
//回调函数:通过函数指针调用的函数就是回调函数
*/

/*
//数组名的理解
int main()
{
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));//16
	//sizeof(数组名),数组名表示整个数组,计算的是整个数组的大小,单位是字节

	printf("%d\n", sizeof(a + 0));//4
	//a不是单独放在sizeof内部,也没有取地址,所以a还是表示首元素的大小
	//此时的a表示首元素的大小

	printf("%d\n", sizeof(*a));
	//a是首元素,*a是解引用
	//a = &a[0]
	//*a=*&a[0]
	//*a=a[0]

	printf("%d\n", sizeof(a + 1));//4
	//第二个元素的地址,这里的a是数组首元素的地址,a+1是第二个元素的大小

	printf("%d\n", sizeof(a[1]));//4
	//计算的是第二个元素的大小

	printf("%d\n", sizeof(&a));//4
	//&a取出的是数组的地址,数组的地址,也就是个地址,也是四个字节

	printf("%d\n", sizeof(*&a));//16
	//&a --> int(*)[4](数组指针)
	// &a拿到的是数组名的地址,类型是int(*)[4](数组指针)
	//对 数组指针 解引用 找到的是 数组
	//*&a --> a
	//
	//*和&抵消了

	printf("%d\n", sizeof(&a+1));
	//&a拿到的是数组的地址,(数组地址+1)跳过的是整个数组
	//&a--> int(*)[4]
	//&a+1 是从数组a的地址向后跳过了一个(4个整形元素)的数组的大小
	//&a+1还是地址,是地址就是4/8个字节

	printf("%d\n", sizeof(&a[0]));
	//&a[0]就是第一个元素的地址
	//计算的是地址的大小

	printf("%d\n", sizeof(&a[0]+1));
	//&a[0]+1是第二个元素的地址
	//大小是4/8个字节
	//&a[0]+1 --> a[1]

	return 0;
}


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	//sizeof(数组名)

	printf("%d\n", sizeof(arr+0));//4/8
	//arr+0 是数组首元素的地址,是地址就是4/8个字节

	printf("%d\n", sizeof(*arr));
	//*arr就是数组的首元素,大小是1字节
	//*arr --> arr[0]
	//

	printf("%d\n", sizeof(arr[1]));//1个字节

	printf("%d\n", sizeof(&arr));
	//&arr是数组的地址,是地址就是4/8个字节

	printf("%d\n", sizeof(&arr+1));// 4 / 8
	//&arr+1是数组后的地址
	//

	printf("%d\n", sizeof(&arr[0] + 1));
	//&arr[0]+1是第二个元素的地址

	printf("%d\n", sizeof(arr[0] + 1));
	//arr[0]是字符,加了一个整形1,会产生整形提升,那sizeof(int(整形))就是4个字节
	return 0;
}




#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f'};
	
	printf("%d\n", strlen(arr));//随机值

	printf("%d\n", strlen(arr + 0));//随机值

	//printf("%d\n", strlen(*arr));	 //随机值,--> strlen('a'); --> strlen(97); //野指针
	//printf("%d\n", strlen(arr[1]));  //strlen('b'); --> strlen(98); //野指针
	//arr首元素地址,*arr-->'a',

	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	return 0;
}
*/

/*
int main()
{
	char arr[] = "abcdef";
	//a b c d e f \0
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));//4/8个字节
	printf("%d\n", sizeof(*arr));	// *arr-->'a'  1个字节
	printf("%d\n", sizeof(&arr)); //取地址,地址就是一个4/8个字节
	printf("%d\n", sizeof(&arr + 1));//跳过整个数组,指向\0后面去了,地址就是4/8个字节
	printf("%d\n", sizeof(&arr[0] + 1));//-->'b',4/8个字节

	return 0;
}
*/

/*
int main()
{
	char arr[] = "abcdef";
	//[a b c d e f \0]
	//strlen是求字符串的长度,关注的是字符串中的\0,计算的是\0之前出现的是字符的个数
	// strlen是库函数,只针对字符串
	//sizeof只关注占用内存空间的大小,不在乎内存中放的是什么
	//sizeof是操作符

	printf("%d\n", strlen(arr));	//6
	printf("%d\n", strlen(arr + 0));//6

	printf("%d\n", strlen(*arr));	//err  --> strlen('a'); --> strlen(97); //野指针
	printf("%d\n", strlen(arr[1]));	//err  strlen('b');		--> strlen(98); //野指针
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));	//随机值,因为跳过了整个数组,
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
*/

int main()
{
	char* p = "abcdef";				//p是字符指针,是一个地址,
	printf("%d\n", sizeof(p));		// 4/8个字节	//p是字符指针,存的是一个首字符地址,p就是a的地址
	printf("%d\n", sizeof(p + 1));	//4/8个字节
	printf("%d\n", sizeof(*p));		//*p访问一个首字符'a',一个字节
	printf("%d\n", sizeof(p[0]));	//p[0]-->*(p+0)-->*p
	printf("%d\n", sizeof(&p));		// 二级指针,还是个地址4/8个字节
	printf("%d\n", sizeof(&p + 1));	// 4/8个字节
	printf("%d\n", sizeof(&p[0] + 1));//b的地址,4/8个字节

	printf("%d\n", strlen(p)); //6个字节    //p就是a的地址
	printf("%d\n", strlen(p+1)); //5个字节  //p+1就是b的地址,跳过了一个a,就剩下了5个字节
	//printf("%d\n", strlen(*p));//*p就是'a',对'a'的地址进行解引用,所以*p就是'a',所以野指针,err
	//printf("%d\n", strlen(p[0]));//p[0]就是'a',对'a'的地址进行解引用,所以*p就是'a',所以野指针,err
	printf("%d\n", strlen(&p));//随机值,取出p的地址,不知道啥时候会遇到\0
	printf("%d\n", strlen(&p+1));//随机值,取出p的地址,不知道啥时候会遇到\0
	printf("%d\n", strlen(&p[0] + 1));//&p[0]就是取出a的地址,&p[0]+1而取出b的地址 所以b的后面是5个字节
	return 0;
}