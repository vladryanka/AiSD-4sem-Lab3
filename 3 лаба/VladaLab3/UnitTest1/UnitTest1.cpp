#include "pch.h"
#include "CppUnitTest.h"
#include "../VladaLab3/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodAlgorithmFloyd)
		{
			string text = "Saint-P;Moscow;10;20\nMoscow;Khabarovsk;40;35";
			string townDep = "Saint-P";
			string townArr = "Moscow";
			int testArray[3][3] = {
					{ 0, 10,50},
					{ 20, 0, 40,},
					{55, 35, 0},
			};
			int** array = algorithmFloyd(text, townDep, townArr);
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					Assert::IsTrue(testArray[i][j] == array[i][j]);
				}
			}
		}
		TEST_METHOD(TestMethodDoMatrix)
		{
			string text = "Saint-P;Moscow;10;20\nMoscow;Khabarovsk;40;35";
			List list;
			list.stringToList(text);
			int** array = list.doingMatrix(text);
			int mas[3][3] = {
					{ 0, 10,invalidPrice},
					{ 20, 0, 40,},
					{invalidPrice, 35, 0},
					
			};
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					Assert::IsTrue(mas[i][j] == array[i][j]);
				}
			}
		}
		TEST_METHOD(TestMethodMaxIndex)
		{
			string text = "Saint-P;Moscow;10;20\nMoscow;Khabarovsk;40;35";
			List list;
			list.stringToList(text);
			Assert::IsTrue(list.maxIndex() == 2);
		}
		TEST_METHOD(TestMethodIndex)
		{
			string text = "Saint-P;Moscow;10;20\nMoscow;Khabarovsk;40;35";
			List list;
			list.stringToList(text);
			Assert::IsTrue(list.index("Saint-P") == 0);
		}
		TEST_METHOD(TestMethodFind)
		{
			string text = "Saint-P;Moscow;10;20\nMoscow;Khabarovsk;40;35";
			List list;
			list.stringToList(text);
			Assert::IsTrue(list.find(0) == "Saint-P");
		}
		
	};
}
