#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n;

	cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= 2 * n - 2 * i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= 2 * n; i++)
		cout << "*";
	cout << "\n";
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= 2 * i ; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return (0);
}