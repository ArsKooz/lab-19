#include <iostream>
using namespace std;
int main() {
	int n, i, j, x,k;
	cout << "Vvedite razmer massiva\n";
	cin >> n;
	int* a = new int[n];
	int* r = new int[n];
	cout << "Vvedite massive\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	k = 0;
	for (i = 0; i < n; i++)
	{
		x = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				x++;
		}
		if (x != 2)
		{
			r[k]=a[i];
			k++;
		}
	}
	cout <<"Razmer preobrazovannogo massiva"<< k << endl;
	for (i = 0; i < k; i++)
	{
		cout << r[i]<<" ";
	}
}