#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	if (90 <= n && n <= 100)
		cout << "A";
	else if (80 <= n && n < 90)
		cout << "B";
	else if (70 <= n && n < 80)
		cout << "C";
	else if (60 <= n && n< 70)
		cout << "D";
	else
		cout << "F";
}
