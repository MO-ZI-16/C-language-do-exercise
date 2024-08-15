#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc -> count = 0;
	memset(pc->data, 0, sizeof(pc->data));

}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼����,�޷����");
	}
	printf("����������:>");
	scanf("%s",pc->data[pc->count].name);//name�������������,�ǵ�ַ
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));//age�����α���,��Ҫȡ��ַ
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[i].name,
										   	pc->data[i].age,
											pc->data[i].sex,
											pc->data[i].tele,
											pc->data[i].addr);
	}

}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME];
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);

	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ���Ĳ�����\n");
		return;
	}
	//2.ɾ��
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	char name[100] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	
	printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	

}

void ModifyContact(Contact* pc)
{

	assert(pc);
	char name[100] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("Ҫ�޸��˵���Ϣ�Ѿ����ҵ�,��������ʼ�޸�\n");
	//2.�޸�
	printf("����������:>");
	scanf("%s", pc->data[pos].name);//name�������������,�ǵ�ַ
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));//age�����α���,��Ҫȡ��ַ
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//��������
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count,sizeof(PeoInfo), cmp_peo_by_name);
	printf("����");
}