#include "stdafx.h"
//
//#include <iostream>
//#include <vector>
//#include  <string>
//using namespace std;
//
//
//int main() {
//
//	string inputString; 
//	cin >> inputString;
//
//	vector<int> a_CombinationCount(inputString.size(), 0);
//	int total_a_count = 0;
//	for (int i = 0; i < inputString.size(); i++) {
//		if (inputString[i] == 'a') {
//			a_CombinationCount[i] = 1;
//			total_a_count++;
//		}
//	}
//	if (total_a_count % 3)
//	{
//		cout << "no possible combinations" << endl;
//		return 0;
//	}
//
//	total_a_count /= 3;
//
//	for (int i = 1; i < inputString.size(); i++) 
//		a_CombinationCount[i] += a_CombinationCount[i - 1];
//
//	int a1 = 0, a2 = 0;
//	for (int i = 0; i < inputString.size(); i++) 
//	{
//		if (a_CombinationCount[i] == total_a_count)
//			a1++;
//		if (a_CombinationCount[i] == 2 * total_a_count)
//			a2++;
//	}
//	cout << a1 * a2 << endl;	
//}