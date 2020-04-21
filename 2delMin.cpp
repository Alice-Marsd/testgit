#include<iostream>
#define Max  8
using namespace std;
typedef struct{
	int *data;
	int MaxSize;
	int length;
}SeqList;
void inital(SeqList* s)
{
	s->data=new int[Max];
	s->length=0;
	s->MaxSize=Max;
}
int delMinNumber(SeqList& s,int& value)
{
	if(s.length==0||s.MaxSize==0)
	return 0;
	int min=0;
	value=s.data[0];
	for(int i=1;i < s.length;++i)
	{
		if(s.data[i] < value)
		{
			min=i;
			value=s.data[i];
		}
	}
	s.data[min]=s.data[s.length-1];
	s.length--;
	return value;
}

int main()
{
	SeqList s;
	inital(&s);
	int a[]={3,2,5,8,4,7,6,9};
	for(int i=0;i<8;++i)
	{
		s.data[i]=a[i];
		++s.length;
	}

	int value;
	delMinNumber(s,value);
	printf("%d\n",value);
//	for(int i=0;i<=s.length;++i)
//	{
//		printf("%d\t",s.data[i]);
//	}
} 
