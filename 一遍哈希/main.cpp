//	map< int , int > maplist;
//	pair<int ,int>* pvalue=new pair<int ,int>(0,78) ;//����һ��ֵ���ڲ��� 
//	map<int,int>::iterator iter1;
//	maplist.insert(*pvalue);//����һ��ֵ 
//    iter1 =maplist.find(0);//�õ���Ӧ��ֵ�ķ���ֵ 
//	cout<<iter1->second <<endl;
//	delete pvalue;
//	return 0;

#include<iostream>
#include<map> 
using namespace std; 

int OKflag=0;

void TwoSum(int a[],int len,int ret[],int target)
{
	map<int,int >maplist;
	map<int,int>::iterator it;
	for(int i=0;i<len;i++)
	{
		pair<int ,int> value(a[i],i);	
		maplist.insert(value);
		it=maplist.find(target-a[i]); 
		if(it!=maplist.end()&&it->second!=i)
		{
			OKflag=1;
			ret[0]=i;
			ret[1]=it->second;
			return;
		}
	}
	OKflag=0;//û���ҵ�ƥ��� 
}
	
	
int main()
{
	int ret[2];
	int nums[]={1,2,4,6,9,8,5,0};
	int len = sizeof(nums)/sizeof(nums[0]);
	TwoSum(nums,len,ret,3);
	if(OKflag!=0)
	{
		printf("�±�Ϊ%d,%d\n",ret[0],ret[1]);
	}
	else
	{
		printf("δ�ҵ�\n");
	}
	return 0;
}
