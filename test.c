#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整型值
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//第一个参数 - 待排序数组的首元素个数
//	//第二个参数 - 待排序数组的元素个数
//	//第三个参数 - 待排序数组的每个元素的大小 - 单位是字节
//	//第四个参数 - 是函数指针，比较两个元素的所用函数的地址 - 这个函数由使用者自己实现
//	//             函数指针的两个参数是：带比较的两个元素的地址。
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//cmp_float(const void* e1, const void* e2)
//{
//	//return *(float*)e1 - *(float*)e2;
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()
//{
//	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]),cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ",f[j]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return  ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串，字符串不能直接用<>=比较,应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//void Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)> 0)
//			{
//				//交换
//				Swap((char*)base + j * width,(char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]), cmp_int);
//}
//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	//qsort(arr, sz,sizeof(arr[0]),cmp_int);
//	////bubble_sort(arr, sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	void* p = &a;
//	*p = 0;
//	//void* 类型的指针，可以接受任意类型的指针。
//	//void* 类型的指针，不能进行解引用操作。
//	//void* 类型的指针，不能进行+-整数的操作。
//	return 0;
//}

int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 - 计算的数组总大小，单位是字节
	//printf("%d\n", sizeof(a + 0));//4/8 - 数组名表示首元素地址，a+0还是首元素地址，地址大小就是4或者8
	//printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素。
	//printf("%d\n", sizeof(a + 1));//4/8 - 数组名表示首元素地址,a+1是第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
	//printf("%d\n", sizeof(&a));//4/8 - &a取出的是数组的地址，但是数组的地址也是4个或8个字节。
	//printf("%d\n", sizeof(*&a));//16 - 计算的就是数组的大小
	//printf("%d\n", sizeof(&a + 1));//4/8 - 计算的是后一个数组的地址大小
	//printf("%d\n", sizeof(&a[0]));//4/8 - 第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - 第二个元素的地址

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值 - 直到找到\0
	printf("%d\n", strlen(arr + 0));//随机值 - 和上面一样
	//printf("%d\n", strlen(*arr));//err - ‘a’-97，非法访问
	//printf("%d\n", strlen(arr[1]));//和上面一样
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值，和上面差6（-6）
	printf("%d\n", strlen(&arr[0] + 1));//随机值，和上上面差1（-1）
	//printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组大小
	//printf("%d\n", sizeof(arr + 0));//4/8 - arr表述的是首元素的地址，arr+0还是首元素的地址。
	//printf("%d\n", sizeof(*arr));//1 - *arr就是首元素
	//printf("%d\n", sizeof(arr[1]));//1 
	//printf("%d\n", sizeof(&arr));//4/8  - 数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1是跳过整个数组后的地址。
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素的地址
	return 0;
}
