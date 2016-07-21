
#include "stdafx.h"
#include<iostream>
#include "algorithm.h"
using namespace std;

algorithm::algorithm(void)
{
}

algorithm::~algorithm(void)
{
}



/*
326. Power of Three https://leetcode.com/problems/power-of-three/
*/
bool algorithm::isPowerOfThree(int n) 
{
	float n1=(float)log10((long double)n);
	long double n3=3;
	long double radix=log10(n3);
	long double temp=n1/radix;  //��3Ϊ�׵Ķ���
	if( n==0 || (temp-(int)temp) )
	{
		return 0;    //������Ϊ3��x�η�
	}
	else
	{
		return 1;
	}
}


/*
https://leetcode.com/problems/counting-bits/
Given a non negative integer number num. 
For every numbers i in the range 0 �� i �� num calculate the number of 1's in their binary representation and return them as an array.
Example:
For num = 5 you should return [0,1,1,2,1,2].
*/
vector<int> algorithm::coutingBits(int num)
{
	//int numTemp=num;
	vector<int> arr;
	arr.push_back(0);
	int numTemp=0;
	for(int i=1;i<=num;i++)
	{
		int a=i/2;
		int t=arr[a];
		int k=i&1;
		numTemp=(t)+k;
		arr.push_back(numTemp);
	}
	return arr;
}

void algorithm::test(void)
{
	for(int i=1;i<=9;i++)
	{
		//std::cout<<
		for(int j=1;j<=9;j++)
		{
			//���b��iλ�ò�Ϊa��iλ�õ�+-3Ϊ���λ�ã������
			if(i!=j+3 && i!=j-3 && i !=j &&i!=j+6 && i!=j-6  )   // n=-2,-1,0,1,2
			{
				std::cout<<"������λ���� "<<i<<"��˧Ϊ��λ���� "<<j<<" ����ͻ"<<std::endl;
			}
		}
	}
}

//���ַ���text��ȷ���з�str�ַ���
bool algorithm::kmp(char *text,char * str)
{
	int textlen=strlen(text);
	int stlen  =strlen(str);
	int i=0,j=0;
	while ( i<textlen  && j<stlen)
	{
		if(text[i]==str[j])
		{
			i++;
			j++;
			continue;
		}
		else
		{
			/*
			  j=next[j];
			*/
			i=i-j+1;
			j=0;
		}
	}
	if(j==stlen)
		return true;
	return false;
}

//ɨ����Ϸ
