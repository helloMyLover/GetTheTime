#include "stdafx.h"
#include "E:\vs2010project\GetTheTime\GetTheTime/src/TimerCounter.h"
#include "E:\vs2010project\GetTheTime\GetTheTime/src/algorithm.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace Testtest
{
	[TestClass]
	public ref class fun_test
	{
	private:
		TestContext^ testContextInstance;

	public: 
		/// <summary>
		///��ȡ�����ò��������ģ����������ṩ
		///�йص�ǰ�������м��书�ܵ���Ϣ��
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		#pragma region Additional test attributes
		//
		//��д����ʱ������ʹ�����¸�������:
		//
		//���������еĵ�һ������֮ǰ��ʹ�� ClassInitialize �����д���
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//�����е����в��Զ�������֮��ʹ�� ClassCleanup �����д���
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//������ÿ������֮ǰ��ʹ�� TestInitialize �����д���
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//��ÿ������������֮��ʹ�� TestCleanup �����д���
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
		#pragma endregion 

		[TestMethod]
		void TestMethod1()
		{
			algorithm argTest;
			bool aReal=argTest.isPowerOfThree(95);
			int aExpect=1;
			Assert::AreEqual(aReal,aExpect);
			//
			// TODO: �ڴ˴���Ӳ����߼�
			//
		};
	};
}
