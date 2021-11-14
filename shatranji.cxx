#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "enter n,m:";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cout << "\n";

		for (int j = 1; j <= m; j++)
		{
			if (i % 2 == 0) {
				if (j % 2 != 0)
					cout << "#";
				else if (j % 2 == 0)
					cout << "*";
			}
		
			if (i % 2 != 0) {
				if (j % 2 != 0)
					cout << "*";
				else if (j % 2 == 0)
					cout << "#";
			}
		}
	}
	system("pause");
	return 0;
}