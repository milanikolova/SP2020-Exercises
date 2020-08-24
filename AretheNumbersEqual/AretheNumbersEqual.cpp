#include <iostream>

using namespace std;

bool isEqual(int a, int b)
{
	return (a == b);
}

int main()
{
    cout << isEqual(12, 56) << endl;
    cout << isEqual(12, 12) << endl;
}

