#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define MAX_NAME 20

//类型的声明
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人的个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);//传的是Contact类型的地址,这里就是Contact类型的一个指针

//增加联系人到通讯录
void AddContact(Contact* pc);

//打印通讯录信息
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//排序通讯录中的内容
//按照名字来排序
void SortContact(Contact* pc);