#include<stdio.h> 


int OKflag=0;

void TwoSum(int a[],int len,int ret[],int target)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(a[j]==target-a[i])
			{
				OKflag=1;
				ret[0]=i;
				ret[1]=j;
				return;
			 } 
		}		
	}
	OKflag=0;//û���ҵ�ƥ��� 
}


int main()
{
	int ret[2];
	int nums[]={1,2,4,8,9,6,4,0};
	int len = sizeof(nums)/sizeof(nums[0]);
	TwoSum(nums,len,ret,2);
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
