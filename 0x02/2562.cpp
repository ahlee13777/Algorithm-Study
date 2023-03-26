#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int max_idx = 0;
	int max = 0;

	int n;
	int num;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		if (num > max)
		{
			max = num;
			max_idx = i + 1;
		}
	}

	cout << max << "\n" << max_idx;
	return (0);
}
