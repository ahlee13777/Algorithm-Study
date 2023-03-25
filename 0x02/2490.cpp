#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[3][4];
	int	bae;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
			cin >> a[i][j];
	}

	for(int i = 0; i < 3; i++)
	{
		bae = 0;
		for(int j = 0; j < 4; j++)
		{
			if (a[i][j] == 0)
				bae++;
		}
		if (bae == 1)
			cout << "A";
		else if (bae == 2)
			cout << "B";
		else if (bae == 3)
			cout << "C";
		else if (bae == 4)
			cout << "D";
		else
			cout << "E";
		cout << "\n";
	}

}
