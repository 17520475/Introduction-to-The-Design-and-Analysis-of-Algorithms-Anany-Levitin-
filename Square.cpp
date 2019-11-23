#include<iostream>

using namespace std;

int first = 0;
long long i = 1;

void Square(long long n)
{
	do
	{
		++i;
	} while (i*i <= n);
	--i;
	long long m = i % 10;
	cout << m;
	if (first == 0)
	{
		cout << ",";
		++first;
	}
	i *= 10;
	Square(n *= 100);
}

int main()
{
	int n = 0;
	cin >> n;
	Square(n);
	system("pause");
	return 0;
}
