#define _CRT_SECURE_NO_WARNINGS 1
#include "listinarray.h"

//int main(void)
//{
//
//	//LIST my_List1, my_List2;//�����߱��LIST���͵ı���
//	LIST my_List2;
//	//DataType Array[] = { 27,39,2,77,89,66 };
//	DataType Array[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//��ʼ�����Ա�
//	//InitList(my_List1);
//	InitList(my_List2);
//
//	//�����Ա��ָ��λ�ò�������
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
//	//������Ա�Ԫ��
//	//cout << "my_list1��";
//	//TraverseList(my_List1);
//	cout << "my_list2��";
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
//	//��ʼ�����Ա�
//	InitList(my_list);
//	InitList(L2);
//	//��my_list��ͷ��һ�β���a,b,c,d,eԪ��
//	for (int i = 1; i <= 5; i++)
//	{
//		ListInsert(my_list, i, Array[i - 1]);
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		ListInsert(L2, i, Array1[i - 1]);
//	}
//	//������Ա��Ⱥ�Ԫ��
//	cout << "my_list_length:" << ListLength(my_list) <<endl;
//	cout << "my_list: ";
//	TraverseList(my_list);
//	//�ж�my_list�Ƿ�Ϊ��
//	cout << "my_list�Ƿ�Ϊ��:" << ListEmpty(my_list) << endl;
//	//��my_list��4��λ�ò���Ԫ��f
//	ListInsert(my_list, 4, 'f');
//	cout << "my_list���ĸ�λ���ϲ����Ԫ��f:";
//	TraverseList(my_list);
//	//ɾ��my_list�ĵ�����Ԫ��
//	ListDelete(my_list, 3,&Array[2]);
//	cout << "my_list: ";
//	TraverseList(my_list);
//	//���my_list�ĵڶ���Ԫ��
//	GetElem(my_list, 2, &Array[1]);
//	cout << "�ڶ���λ�õ�Ԫ��Ϊ��"<< Array[1] << endl;
//	//���Ԫ��'b'��λ��
//	cout << "my_list��'b'��λ��:" << Find(my_list, 'b')<< endl;
//
//	cout << "���Ա�my_List�������ݣ�" << endl;
//	TraverseList(my_list);
//
//	cout << "���Ա�L2�������ݣ�" << endl;
//	TraverseList(L2);
//	//�ϲ�����
//	MergeList(my_list, L2);
//
//	cout << "�ϲ�������Ա�my_List�������ݣ�" << endl;
//	TraverseList(my_list);
//	return 0;
//}

int main()
{
	LIST La, Lb, Lc;
	DataType a[] = { 1,3,2,5 };
	DataType b[] = { 4,10,8};
	
	//��ʼ��
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
	cout << "La�����ݣ�";
	TraverseList(La);

	cout << "Lb�����ݣ�";
	TraverseList(Lb);

	MegeList_Sq(La, Lb, Lc);

	cout << "�ϲ�������Ա�Lc�������ݣ�" << endl;
	TraverseList(Lc);
	return 0;
}