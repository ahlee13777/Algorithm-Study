#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20];
	int	a, b;
	int	tmp;

	for (int i = 0; i < 20; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		a -= 1;
		b -= 1;
		while (a < b)
		{
			tmp = arr[a];
			arr[a] = arr[b];
			arr[b] = tmp;
			a++;
			b--;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << " ";
	}
	return (0);
}
