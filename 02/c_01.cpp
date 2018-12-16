#include <iostream>

using namespace std;

int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	cout << "arr: " << arr << "\n*arr: " << *arr << "\n&arr: " << &arr << endl;
	cout << "&arr + 1: " << arr + 1 << "\n*(arr+1):" << *(arr + 1) << endl;
	system("pause");
	return 0;
}
