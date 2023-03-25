#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n[5];

	for(int i = 0; i < 3; i++)
		cin >> n[i];

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3 - i - 1; j++)
		{
			if (n[j] > n[j + 1])
			{
				n[4] = n[j];
				n[j] = n[j+1];
				n[j+1] = n[4];
			}
		}
	}
	for(int i = 0; i < 3; i++)
		cout << n[i] << ' ';
}
