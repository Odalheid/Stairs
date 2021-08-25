#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int stairs_num, current, previous, tmp;
	cin >> stairs_num >> current;
	previous = 0;
	for (int j = 0; j < stairs_num - 1; ++j) {
		int t = current;
		cin >> tmp;
		current = max(previous, current) + tmp;
		previous = t;
	}
	cout << current;
    return 0;
  }

