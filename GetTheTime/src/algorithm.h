#pragma  once
#include <vector>  //coutingBits
#include <math.h>  //isPowerOfThree
#include <stack>  //
#include <map>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
ref class algorithm
{
public:
	algorithm(void);
	~algorithm();

	public:
	bool isPowerOfThree(int n);
	vector<int> coutingBits(int num);
	void test(void);
	bool kmp(char *text,char * str);  //字符串匹配 
//	void depthFirstSearch(TreeNode root);
private:
	//struct TreeNode
	//{
	//	int val;
	//	TreeNode *left;
	//	TreeNode *right;
	//	TreeNode(int x):val(x),left(NULL),right(NULL){}
	//};
};

//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x):val(x),left(NULL),right(NULL){}
//};


//leecode 345
class Solution2 {
public:
	bool isVowels(char str)
	{
		if(str == 'a' ||str =='e' ||str=='i'||str=='o'||str=='u'||str == 'A' ||str =='E' ||str=='I'||str=='O'||str=='U')
		{    
			return true;
		}
		return false;
	}
	string reverseVowels(string s) {
		string result(s);
		int j=s.size()-1;
		for(int i=0;i<=j;)
		{
			char st=s[i];
			bool temp=isVowels(  st);
			if(temp==true)
			{
				if(isVowels(s[j]))
				{
					result[i]=s[j];
					result[j]=s[i];
					i++;
					j--;
					continue;
				}
				result[j]=s[j];
				j--;
				continue;
			}
			result[i]=s[i];
			i++;
		}
		return result;
	}
};


class Solution{
public:
	map<TreeNode *,int> dp1;
	map<TreeNode*,int> dp2;

	int rob(TreeNode* root)
	{
		dfs(root);
		return max(dp1[root],dp2[root]);
	}
	//depth frist search
	void dfs( TreeNode * root)
	{
		if (root == NULL)
			return ;
		dfs(root->left);
		dfs(root->right);
		//偷这个节点
		dp1[root]=root->val+dp2[root->left]+dp2[root->right];
		//不偷这个节点
		dp2[root]=max(max(dp1[root->left]+dp1[root->right],dp2[root->left]+dp2[root->right]),
			max(dp2[root->left]+dp1[root->right],dp1[root->left]+dp2[root->right]));
	}
};

//template <class Type>class Node
//{
//public:
//	Type data;
//	Node<Type> *link;
//	Node() : data(Type()),link(NULL) {}
//	Node(const Type &item) : data(item),link(NULL){}
//	Node(const Type &item , Node<Type> *p) : data(item),link(p){}
//};
//
//template <class Type> class Link : class Node
//{
//	
//};

//int add1(int x,int y)
//{
//	return x+y;
//}


//#region Trie
//	public class TrieNode
//	{
//		public TrieNode[] childNodes;
//		public int freq;
//		public char nodechar;
//		public HashSet<int> hashSet = new HashSet<int>();
//		public TrieNode()
//		{
//			childNodes = new TreeNode[26];
//			freq = 0;
//		}
//	};
//#endregion
//
	class Test
	{
		int x, y;
	public:
		Test(int i, int j = 0)
		{
			x = i; y = j;
		}
		int get(int i, int j)
		{
			return i + j;
		}
	};
