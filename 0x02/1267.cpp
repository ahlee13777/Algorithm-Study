#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n;
	int	sec;

	int	ys = 0;
	int	ms = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sec;
		ys += (sec / 30 + 1) * 10;
		ms += (sec / 60 + 1) * 15;
	}
	if (ys < ms)
		cout << "Y " << ys;
	else if (ys == ms)
		cout << "Y M " << ys;
	else
		cout << "M " << ms;
	return (0);
}
