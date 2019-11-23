#include<iostream>

using namespace std;

int first = 0;
long long i = 1;

void Canbachai(long long n)
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
	Canbachai(n *= 100);
}

int main()
{
	Canbachai(2);
	system("pause");
	return 0;
}