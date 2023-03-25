#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	int d, e, f;
	d = min(a,min(b,c));
	f = max(a,max(b,c));
	e = a+b+c-d-f;

	cout << d << ' ' << e << f;

}
