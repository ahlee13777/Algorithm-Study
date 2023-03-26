#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n;
	int result = 0;
	int	min = 100;

	for (int i = 0; i < 7; i++)
	{
		cin >> n;
		if (n % 2 == 1) // n & 1
		{
			result += n;
			if (min > n)
				min = n;
		}
	}
	if (result == 0)
	{
		cout << -1;
		return (0);
	}
	cout << result << "\n" << min;
	return (0);
}
