#include<iostream>
#include<map> 
using namespace std;


int main()
{
	map< int , int > maplist;
	pair<int ,int>* pvalue=new pair<int ,int>(0,78) ;//����һ��ֵ���ڲ��� 
	map<int,int>::iterator iter1;
	maplist.insert(*pvalue);//����һ��ֵ 
    iter1 =maplist.find(0);//�õ���Ӧ��ֵ�ķ���ֵ 
	cout<<iter1->second <<endl;
	delete pvalue;
	return 0;	
}
