
#include<stdio.h>
#include<stdlib.h>


//typedef struct          // ����һ���ṹ�����ͣ�DATA
//{
//    char key[10];       // �ṹ���Ա��key
//    char name[20];      // �ṹ���Ա��name
//    int age;            // �ṹ���Ա��age
//}DATA;
//    
//DATA data;              // ����һ���ṹ�����
//DATA *pdata;            // ����һ��ָ��ṹ���ָ��
//    
//// �������ݲ������£�
//data.age = 24;          // �ṹ�����ͨ���������( . )����
//pdata->age = 24;        // ָ��ṹ���ָ��ͨ����ͷ�����( -> )����



typedef struct Node
{
	int data;
	struct Node *pNext;
}NODE,*PNODE;

PNODE create_list();       
void traverse_list(PNODE);
bool is_empty(PNODE);     
int length_list(PNODE); 
void sort_list(PNODE);    
bool insert_list(PNODE,int,int);
bool delete_list(PNODE,int,int *);
void clear_list(PNODE);

PNODE test(){
	//����һ��ṹ���ڴ棬����һ��ָ��ýṹ���ڴ������ָ����� 
	PNODE p=(PNODE)malloc(sizeof(NODE));
	p->data = 18;
	p->pNext = NULL;
	return p;   //ָ��p��һ������,��ʵ���ڴ����ڶ��У����ᱻ���٣����� 
}

int* testInt(){
	int sum = 1000;
	int *point = &sum;
	return point;
}

// malloc()
//ϵͳ���ڡ��ѡ��������һ���������ڴ�����������ԭ�Ͷ�����ͷ�ļ�stdlib.h
int main(){
	//array must be initialized with a brace-enclosed initializer
	// scalar object arr requires one element in initializer
	printf("%d",*testInt());
	test();
}
 
