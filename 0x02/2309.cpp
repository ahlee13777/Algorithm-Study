#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[9];
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sum -= 100;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (a[i] + a[j] == sum)
			{
				a[i] = 1000;
				a[j] = 1000;
				break;
			}
		}
		if (a[i] == 1000)
			break;
	}
	sort(a, a+9);
	for (int i = 0; i < 7; i++)
		cout << a[i] << "\n";
	return (0);
}
