#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ڴ�-->�ڴ浥Ԫ(1byte)-->���-->��ַ-->ָ��
//����ָ�����һ����ַ
//��ͷ��˵��ָ��һ��ָ:ָ�����
//ָ���������һ����������,����һ���ڴ�ռ�,ָ�����������ŵ�ַ


//ָ�����͵�����:
// +1/-1�Ĳ���,���������ֽ�(����)
// �����ò�����ʱ���Ȩ��
/*
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 30;
	printf("%d\n", a);

	char ch = 'w';
	char* pch = &ch;

	//ָ������:�����Ͼ�������,�����д�ŵ���ָ��(��ַ)
	int* pa;
	int* pb;
	int* pc;
	int* arr[3] = { pa,pb,pc };	
	return 0;
}


//����ָ��
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);

	//�����ĵ�ַ����ں���ָ�������
	int (*pf)(int, int) = &Add;
	return 0;
}

//��ź���ָ�������
//int(*pfArr[4])(int,int)
//pfArr�����ÿ��Ԫ�ص�������:int(*)(int,int)
//�ص�����:ͨ������ָ����õĺ������ǻص�����
*/

/*
//�����������
int main()
{
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));//16
	//sizeof(������),��������ʾ��������,���������������Ĵ�С,��λ���ֽ�

	printf("%d\n", sizeof(a + 0));//4
	//a���ǵ�������sizeof�ڲ�,Ҳû��ȡ��ַ,����a���Ǳ�ʾ��Ԫ�صĴ�С
	//��ʱ��a��ʾ��Ԫ�صĴ�С

	printf("%d\n", sizeof(*a));
	//a����Ԫ��,*a�ǽ�����
	//a = &a[0]
	//*a=*&a[0]
	//*a=a[0]

	printf("%d\n", sizeof(a + 1));//4
	//�ڶ���Ԫ�صĵ�ַ,�����a��������Ԫ�صĵ�ַ,a+1�ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(a[1]));//4
	//������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a));//4
	//&aȡ����������ĵ�ַ,����ĵ�ַ,Ҳ���Ǹ���ַ,Ҳ���ĸ��ֽ�

	printf("%d\n", sizeof(*&a));//16
	//&a --> int(*)[4](����ָ��)
	// &a�õ������������ĵ�ַ,������int(*)[4](����ָ��)
	//�� ����ָ�� ������ �ҵ����� ����
	//*&a --> a
	//
	//*��&������

	printf("%d\n", sizeof(&a+1));
	//&a�õ���������ĵ�ַ,(�����ַ+1)����������������
	//&a--> int(*)[4]
	//&a+1 �Ǵ�����a�ĵ�ַ���������һ��(4������Ԫ��)������Ĵ�С
	//&a+1���ǵ�ַ,�ǵ�ַ����4/8���ֽ�

	printf("%d\n", sizeof(&a[0]));
	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ
	//������ǵ�ַ�Ĵ�С

	printf("%d\n", sizeof(&a[0]+1));
	//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
	//��С��4/8���ֽ�
	//&a[0]+1 --> a[1]

	return 0;
}


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	//sizeof(������)

	printf("%d\n", sizeof(arr+0));//4/8
	//arr+0 ��������Ԫ�صĵ�ַ,�ǵ�ַ����4/8���ֽ�

	printf("%d\n", sizeof(*arr));
	//*arr�����������Ԫ��,��С��1�ֽ�
	//*arr --> arr[0]
	//

	printf("%d\n", sizeof(arr[1]));//1���ֽ�

	printf("%d\n", sizeof(&arr));
	//&arr������ĵ�ַ,�ǵ�ַ����4/8���ֽ�

	printf("%d\n", sizeof(&arr+1));// 4 / 8
	//&arr+1�������ĵ�ַ
	//

	printf("%d\n", sizeof(&arr[0] + 1));
	//&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ

	printf("%d\n", sizeof(arr[0] + 1));
	//arr[0]���ַ�,����һ������1,�������������,��sizeof(int(����))����4���ֽ�
	return 0;
}




#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f'};
	
	printf("%d\n", strlen(arr));//���ֵ

	printf("%d\n", strlen(arr + 0));//���ֵ

	//printf("%d\n", strlen(*arr));	 //���ֵ,--> strlen('a'); --> strlen(97); //Ұָ��
	//printf("%d\n", strlen(arr[1]));  //strlen('b'); --> strlen(98); //Ұָ��
	//arr��Ԫ�ص�ַ,*arr-->'a',

	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	return 0;
}
*/

/*
int main()
{
	char arr[] = "abcdef";
	//a b c d e f \0
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));//4/8���ֽ�
	printf("%d\n", sizeof(*arr));	// *arr-->'a'  1���ֽ�
	printf("%d\n", sizeof(&arr)); //ȡ��ַ,��ַ����һ��4/8���ֽ�
	printf("%d\n", sizeof(&arr + 1));//������������,ָ��\0����ȥ��,��ַ����4/8���ֽ�
	printf("%d\n", sizeof(&arr[0] + 1));//-->'b',4/8���ֽ�

	return 0;
}
*/

/*
int main()
{
	char arr[] = "abcdef";
	//[a b c d e f \0]
	//strlen�����ַ����ĳ���,��ע�����ַ����е�\0,�������\0֮ǰ���ֵ����ַ��ĸ���
	// strlen�ǿ⺯��,ֻ����ַ���
	//sizeofֻ��עռ���ڴ�ռ�Ĵ�С,���ں��ڴ��зŵ���ʲô
	//sizeof�ǲ�����

	printf("%d\n", strlen(arr));	//6
	printf("%d\n", strlen(arr + 0));//6

	printf("%d\n", strlen(*arr));	//err  --> strlen('a'); --> strlen(97); //Ұָ��
	printf("%d\n", strlen(arr[1]));	//err  strlen('b');		--> strlen(98); //Ұָ��
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));	//���ֵ,��Ϊ��������������,
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
*/

int main()
{
	char* p = "abcdef";				//p���ַ�ָ��,��һ����ַ,
	printf("%d\n", sizeof(p));		// 4/8���ֽ�	//p���ַ�ָ��,�����һ�����ַ���ַ,p����a�ĵ�ַ
	printf("%d\n", sizeof(p + 1));	//4/8���ֽ�
	printf("%d\n", sizeof(*p));		//*p����һ�����ַ�'a',һ���ֽ�
	printf("%d\n", sizeof(p[0]));	//p[0]-->*(p+0)-->*p
	printf("%d\n", sizeof(&p));		// ����ָ��,���Ǹ���ַ4/8���ֽ�
	printf("%d\n", sizeof(&p + 1));	// 4/8���ֽ�
	printf("%d\n", sizeof(&p[0] + 1));//b�ĵ�ַ,4/8���ֽ�

	printf("%d\n", strlen(p)); //6���ֽ�    //p����a�ĵ�ַ
	printf("%d\n", strlen(p+1)); //5���ֽ�  //p+1����b�ĵ�ַ,������һ��a,��ʣ����5���ֽ�
	//printf("%d\n", strlen(*p));//*p����'a',��'a'�ĵ�ַ���н�����,����*p����'a',����Ұָ��,err
	//printf("%d\n", strlen(p[0]));//p[0]����'a',��'a'�ĵ�ַ���н�����,����*p����'a',����Ұָ��,err
	printf("%d\n", strlen(&p));//���ֵ,ȡ��p�ĵ�ַ,��֪��ɶʱ�������\0
	printf("%d\n", strlen(&p+1));//���ֵ,ȡ��p�ĵ�ַ,��֪��ɶʱ�������\0
	printf("%d\n", strlen(&p[0] + 1));//&p[0]����ȡ��a�ĵ�ַ,&p[0]+1��ȡ��b�ĵ�ַ ����b�ĺ�����5���ֽ�
	return 0;
}