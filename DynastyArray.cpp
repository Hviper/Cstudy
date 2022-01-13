#include<stdio.h>
#include<stdlib.h>



//动态分配整形数组内存的方法
//malloc()最常用的场合，就是为数组和自定义数据结构分配内存。 
//malloc()不会对所分配的内存进行初始化，里面还保存着原来的值。如果没有初始化，就使用这段内存，可能从里面读到以前的值。程序员要自己负责初始化
int* getArray(int n){
	//calloc(size_t _NumOfElements,size_t _SizeOfElements);  【函数签名】 
	//会将所分配的内存全部初始化为0
	int *arr = (int*)calloc(n,sizeof(int));
	if(!arr){
		printf("分配失败");
		return NULL;
	}
	return arr;
}


int* reallocTest(int *arr,int n){
	//在堆中的已经分配的内存的扩展realloc 
	return (int*)realloc(arr,n);
}

//free()函数的使用 
//free()用于释放malloc()函数分配的内存，函数的原型定义在头文件stdlib.h里面。 
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
 
