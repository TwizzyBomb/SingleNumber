/*
Yahia Adrian Brocke
This driver class contains the main method.
*/

#include "SingleNumber.h"
using namespace std;

int main(void)
{
	/* some test vectors */
	vector<int> test = { 4, 1, 2, 1, 2 };
	vector<int> test2 = { -1, -1, -2, -3, -4, -2, -4 };
	vector<int> test3 = { 10, 20, 30, 10, 20, 30, 40 };

	SingleNumber sn;
	cout << "test1:" <<
		sn.singleNumber(test) <<
		" test2:" <<
		sn.singleNumber(test2) <<
		" test3:" <<
		sn.singleNumber(test3) <<
		endl;

	cin.get();

}