////дһ���������ض�������1�ĸ��� 
//#include<stdio.h>
//
//int count_bit(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit(a);
//	printf("count=%d\n", count);
//	return 0;
//}

#include <stdio.h>
#include<string.h>
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//void Print1(Stu tmp)
//{
//
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
void Print2(Stu* tmp)
{

	printf("name: %s\n", tmp->name);
	printf("age: %d\n", tmp->age);
	printf("tele: %s\n", tmp->tele);
	printf("sex: %s\n", tmp->sex);
}
	int main()
	{
		Stu s = ("��" ,40,"15649986786", "��");
		Print2(&s);
		//Print1(s);
		return 0;
}



