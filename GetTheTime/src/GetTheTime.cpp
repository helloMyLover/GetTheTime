// GetTheTime.cpp : 定义控制台应用程序的入口点。
//此程序获取系统时间，并计算时间差

#include "stdafx.h"
#include "TimerCounter.h"
#using <system.dll>
#include<iostream>

#include "algorithm.h"


using namespace System;
using namespace System::Timers;
using namespace std;
//void test();
//vector<int> coutingBits(int num);  
//bool isPowerOfThree(int n) ;

public ref class Timer1
{
private: 
   static System::Timers::Timer^ aTimer;

public:
   static void Demo()
   {
      // Normally, the timer is declared at the class level,
      // so that it stays in scope as long as it is needed.
      // If the timer is declared in a long-running method,  
      // KeepAlive must be used to prevent the JIT compiler 
      // from allowing aggressive garbage collection to occur 
      // before the method ends. (See end of method.)
      //System::Timers::Timer^ aTimer;

      // Create a new Timer with Interval set to 10 seconds.
      aTimer = gcnew System::Timers::Timer( 10000 );

      // Hook up the Elapsed event for the timer.
      aTimer->Elapsed += gcnew ElapsedEventHandler( Timer1::OnTimedEvent );

      // Set the Interval to 2 seconds (2000 milliseconds).
      aTimer->Interval = 2000;
      aTimer->Enabled = true;

      Console::WriteLine("Press the Enter key to exit the program.");
      Console::ReadLine();

      // If the timer is declared in a long-running method, use
      // KeepAlive to prevent garbage collection from occurring
      // before the method ends.
      //GC::KeepAlive(aTimer);
   }


private:
   // Specify what you want to happen when the Elapsed event is 
   // raised.
   static void OnTimedEvent( Object^ source, ElapsedEventArgs^ e )
   {
      Console::WriteLine( "The Elapsed event was raised at {0}", e->SignalTime );
   }

};




int _tmain(int argc, _TCHAR* argv[])
{
	algorithm alg;
	int type=0;     //显示日期级别，ms级精度，高精度
	int k;
	if(type ==1)
	{
		Timer1::Demo();  //xuyao
	}
	else if(type ==0)
	{
		TimerCounter tc;
		tc.Start();
		Sleep(105);
	//	k=coutingBits(5);
		k=alg.isPowerOfThree(1594322);
	//	stri=str.reverseVowels(stri);
		tc.Stop();
		std::cout<<"耗时: "<<tc.dbTime * 1000<<"ms "<<std::endl;
		std::cout<<"耗时: "<<k<<endl
			               <<log((double)10)<<endl
						   <<log10((double)10)<<std::endl;
		system("pause");
	}
	return 0;
}


/*
https://leetcode.com/problems/house-robber-iii/
337. House Robber III My Submissions QuestionEditorial Solution
Total Accepted: 6675 Total Submissions: 18049 Difficulty: Medium
The thief has found himself a new place for his thievery again. There is only one entrance to this area, called the "root." Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that "all houses in this place forms a binary tree". It will automatically contact the police if two directly-linked houses were broken into on the same night.
Determine the maximum amount of money the thief can rob tonight without alerting the police.
*/


//int rob(TreeNode* root)
//{	
//	int sum[2]={0,0};
//	TreeNode nodeTemp= *root;
//
//	vector< vector<TreeNode > > nodeV;
//	nodeV.resize(2);
//
//	nodeV[0].push_back(root);
//	sum[0]+=root->val;
//
//	while ( !nodeV[0].empty() || !nodeV[1].empty())
//	{
//		for(vector<TreeNode *>iterator it=nodeV[0].begin(); it!=nodeV[0].end(); it++)
//		{ 
//			TreeNode* itTemp=(TreeNode *)*it;
//			if(itTemp->left!=NULL)
//			{
//				nodeV[1].push_back(itTemp->left);
//				sum[1]+=itTemp->left->val;
//			}
//			if(itTemp->right!=NULL)
//			{
//				nodeV[1].push_back(itTemp->right);
//				sum[1]+=itTemp->right->val;
//			}
//		}
//		nodeV[0].clear();
//
//		for(vector<TreeNode*>iterator it =nodeV[1].begin(); it != nodeV[1].end(); it++)
//		{
//			TreeNode* itTemp=(TreeNode*)*it;
//			if(itTemp->left!=NULL)
//			{
//				nodeV[0].push_back(itTemp->left);
//				sum[0]+=itTemp->left->val;
//			}
//			if(itTemp->right!=NULL)
//			{
//				nodeV[0].push_back(itTemp->right);
//				sum[0]+=itTemp->right->val;
//			}
//		}
//		nodeV[1].clear();
//	}
//
//	return sum[0]>sum[1]?sum[0]:sum[1];
//}
//
//
