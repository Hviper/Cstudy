#include<stdio.h>
#include<stdlib.h>



//��̬�������������ڴ�ķ���
//malloc()��õĳ��ϣ�����Ϊ������Զ������ݽṹ�����ڴ档 
//malloc()�������������ڴ���г�ʼ�������滹������ԭ����ֵ�����û�г�ʼ������ʹ������ڴ棬���ܴ����������ǰ��ֵ������ԱҪ�Լ������ʼ��
int* getArray(int n){
	//calloc(size_t _NumOfElements,size_t _SizeOfElements);  ������ǩ���� 
	//�Ὣ��������ڴ�ȫ����ʼ��Ϊ0
	int *arr = (int*)calloc(n,sizeof(int));
	if(!arr){
		printf("����ʧ��");
		return NULL;
	}
	return arr;
}


int* reallocTest(int *arr,int n){
	//�ڶ��е��Ѿ�������ڴ����չrealloc 
	return (int*)realloc(arr,n);
}

//free()������ʹ�� 
//free()�����ͷ�malloc()����������ڴ棬������ԭ�Ͷ�����ͷ�ļ�stdlib.h���档 
int main(){
	int *arr = (int*)calloc(5,sizeof(int));
	for(int i=0;i<5;i++){
		arr[i] = i;
	}
//	int array[] = {15,64,84,95,1};
//	int *arr = array;
	int *p = reallocTest(arr,sizeof(int)*10);
	for(int i=0;i<10;i++){
		printf("-->%d\n",p[i]);
	}
}
 
