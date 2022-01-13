
#include<stdio.h>
#include<stdlib.h>


//typedef struct          // 定义一个结构体类型：DATA
//{
//    char key[10];       // 结构体成员：key
//    char name[20];      // 结构体成员：name
//    int age;            // 结构体成员：age
//}DATA;
//    
//DATA data;              // 声明一个结构体变量
//DATA *pdata;            // 声明一个指向结构体的指针
//    
//// 访问数据操作如下：
//data.age = 24;          // 结构体变量通过点运算符( . )访问
//pdata->age = 24;        // 指向结构体的指针通过箭头运算符( -> )访问



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
	//申请一块结构体内存，返回一个指向该结构体内存区域的指针给我 
	PNODE p=(PNODE)malloc(sizeof(NODE));
	p->data = 18;
	p->pNext = NULL;
	return p;   //指针p的一个拷贝,真实的内存存放在堆中，不会被销毁！！！ 
}

int* testInt(){
	int sum = 1000;
	int *point = &sum;
	return point;
}

// malloc()
//系统就在“堆”里面分配一段连续的内存块给它。它的原型定义在头文件stdlib.h
int main(){
	//array must be initialized with a brace-enclosed initializer
	// scalar object arr requires one element in initializer
	printf("%d",*testInt());
	test();
}
 
