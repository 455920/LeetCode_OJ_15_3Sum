#include<iostream>
#include<map> 
using namespace std;


int main()
{
	map< int , int > maplist;
	pair<int ,int>* pvalue=new pair<int ,int>(0,78) ;//创建一个值用于插入 
	map<int,int>::iterator iter1;
	maplist.insert(*pvalue);//插入一个值 
    iter1 =maplist.find(0);//得到对应键值的返回值 
	cout<<iter1->second <<endl;
	delete pvalue;
	return 0;	
}
