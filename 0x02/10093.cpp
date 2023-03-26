#include "stdc++.h"
//#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b;

	cin >> a >> b;

	if(a == b) // 두 수가 같은 경우
    {
        cout << 0 << endl;
        return 0;
    }

    if(a > b) // a와 b를 swap
    {
        long long tmp = a;
        a = b;
        b = tmp;
    }

	cout << b - a -1 << "\n";

	for (a = a + 1; a < b; a++)
	{
		cout << a << " ";
	}

}
