#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9,0 };

	cout << "Hello Fucking World!" << endl;
	cout << "Change Something" << endl;
	for (int i = 0; i < 10; i++) {
		cout << vec[i] << " ";
	}

	return 0;
}