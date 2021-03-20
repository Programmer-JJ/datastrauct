#define _CRT_SECURE_NO_WARNINGS 1
#include "listinarray.h"

//int main(void)
//{
//
//	//LIST my_List1, my_List2;//定义线标表LIST类型的变量
//	LIST my_List2;
//	//DataType Array[] = { 27,39,2,77,89,66 };
//	DataType Array[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//初始化线性表
//	//InitList(my_List1);
//	InitList(my_List2);
//
//	//向线性表的指定位置插入数据
//	//ListInsert(my_List1, 1, 89);
//	//ListInsert(my_List1, 1, 77);
//	//ListInsert(my_List1, 3, 66);
//	//ListInsert(my_List1, 1, 2);
//	//ListInsert(my_List1, 1, 39);
//	//ListInsert(my_List1, 1, 27);
//
//	for (int i = 1; i <= 10; i++)
//	{
//		ListInsert(my_List2, i, Array[i - 1]);
//		ListInsert(my_List2, i, Array[i - 1]);
//	}
//		
//
//	//输出线性表元素
//	//cout << "my_list1：";
//	//TraverseList(my_List1);
//	cout << "my_list2：";
//	TraverseList(my_List2);
//
//	return 0;
//}

//int main()
//{
//	LIST my_list;
//	LIST L2;
//	DataType Array[] = { 'a','b','c','d','e' };
//	DataType Array1[] = { 'm','y','s','i','s','e' };
//	//初始化线性表
//	InitList(my_list);
//	InitList(L2);
//	//在my_list的头部一次插入a,b,c,d,e元素
//	for (int i = 1; i <= 5; i++)
//	{
//		ListInsert(my_list, i, Array[i - 1]);
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		ListInsert(L2, i, Array1[i - 1]);
//	}
//	//输出线性表长度和元素
//	cout << "my_list_length:" << ListLength(my_list) <<endl;
//	cout << "my_list: ";
//	TraverseList(my_list);
//	//判断my_list是否为空
//	cout << "my_list是否为空:" << ListEmpty(my_list) << endl;
//	//在my_list第4个位置插入元素f
//	ListInsert(my_list, 4, 'f');
//	cout << "my_list第四个位置上插入的元素f:";
//	TraverseList(my_list);
//	//删除my_list的第三个元素
//	ListDelete(my_list, 3,&Array[2]);
//	cout << "my_list: ";
//	TraverseList(my_list);
//	//输出my_list的第二个元素
//	GetElem(my_list, 2, &Array[1]);
//	cout << "第二个位置的元素为："<< Array[1] << endl;
//	//输出元素'b'的位置
//	cout << "my_list的'b'的位置:" << Find(my_list, 'b')<< endl;
//
//	cout << "线性表my_List中有数据：" << endl;
//	TraverseList(my_list);
//
//	cout << "线性表L2中有数据：" << endl;
//	TraverseList(L2);
//	//合并数据
//	MergeList(my_list, L2);
//
//	cout << "合并后的线性表my_List中有数据：" << endl;
//	TraverseList(my_list);
//	return 0;
//}

int main()
{
	LIST La, Lb, Lc;
	DataType a[] = { 1,3,2,5 };
	DataType b[] = { 4,10,8};
	
	//初始化
	InitList(La);
	InitList(Lb);
	InitList(Lc);
	for (int i = 1; i <= sizeof(a) / sizeof(a[0]); i++)
	{
		ListInsert(La, i, a[i - 1]);
	}
	for (int j = 1; j <= sizeof(b) / sizeof(b[0]); j++)
	{
		ListInsert(Lb, j, b[j - 1]);
	}
	cout << "La中数据：";
	TraverseList(La);

	cout << "Lb中数据：";
	TraverseList(Lb);

	MegeList_Sq(La, Lb, Lc);

	cout << "合并后的线性表Lc中有数据：" << endl;
	TraverseList(Lc);
	return 0;
}